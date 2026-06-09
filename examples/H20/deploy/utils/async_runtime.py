from __future__ import annotations

import queue
import threading
import time
from typing import Any

from loguru import logger


class AsyncChunkInferenceWorker:
    def __init__(self, model, wait_timeout: float = 0.03, queue_size: int = 2):
        self.model = model
        self.wait_timeout = float(wait_timeout)
        qsize = max(1, int(queue_size))
        self._request_queue: queue.Queue[tuple[int, int, dict[str, Any]] | None] = queue.Queue(maxsize=qsize)
        self._result_queue: queue.Queue[tuple[int, int, Any, float]] = queue.Queue(maxsize=qsize)
        self._stopped = threading.Event()
        self._lock = threading.Lock()
        self._task_epoch = 0
        self._worker = threading.Thread(target=self._run, daemon=True)
        self._worker.start()

    def _drain_queue(self, q: queue.Queue) -> None:
        while True:
            try:
                q.get_nowait()
            except queue.Empty:
                return

    def start_new_task(self) -> int:
        with self._lock:
            self._task_epoch += 1
            task_epoch = self._task_epoch
        self._drain_queue(self._request_queue)
        self._drain_queue(self._result_queue)
        return task_epoch

    def request(self, example, request_id: int, task_epoch: int) -> bool:
        if self._stopped.is_set():
            return False
        item = (int(task_epoch), int(request_id), example)
        while self._request_queue.full():
            try:
                self._request_queue.get_nowait()
            except queue.Empty:
                break
        try:
            self._request_queue.put_nowait(item)
            return True
        except queue.Full:
            return False

    def get_latest_matching_request(self, request_id: int, task_epoch: int):
        stash = []
        hit = None
        while True:
            try:
                item = self._result_queue.get_nowait()
            except queue.Empty:
                break
            e, rid, actions, _ = item
            if e == task_epoch and rid == request_id:
                hit = (rid, actions)
            elif e >= task_epoch:
                stash.append(item)
        for item in stash:
            try:
                self._result_queue.put_nowait(item)
            except queue.Full:
                pass
        return hit

    def get_blocking_for_request(self, request_id: int, task_epoch: int, timeout: float | None = None):
        deadline = time.time() + (self.wait_timeout if timeout is None else float(timeout))
        stash = []
        try:
            while True:
                remain = max(0.0, deadline - time.time())
                if remain <= 0.0:
                    raise queue.Empty
                item = self._result_queue.get(timeout=remain)
                e, rid, actions, _ = item
                if e == task_epoch and rid == request_id:
                    for s in stash:
                        try:
                            self._result_queue.put_nowait(s)
                        except queue.Full:
                            pass
                    return rid, actions
                stash.append(item)
        finally:
            for s in stash:
                try:
                    self._result_queue.put_nowait(s)
                except queue.Full:
                    pass

    def _run(self):
        while not self._stopped.is_set():
            try:
                item = self._request_queue.get(timeout=0.05)
            except queue.Empty:
                continue
            if item is None:
                continue
            task_epoch, request_id, example = item
            start = time.time()
            try:
                response = self.model.step(example)
                actions = response.get("raw_actions", None)
                latency = time.time() - start
                while self._result_queue.full():
                    try:
                        self._result_queue.get_nowait()
                    except queue.Empty:
                        break
                try:
                    self._result_queue.put_nowait((task_epoch, request_id, actions, latency))
                except queue.Full:
                    pass
            except Exception:
                logger.exception("Async worker inference failed")

    def stop(self):
        if self._stopped.is_set():
            return
        self._stopped.set()
        self._drain_queue(self._request_queue)
        self._drain_queue(self._result_queue)
        try:
            self._request_queue.put_nowait(None)
        except queue.Full:
            pass
        self._worker.join(timeout=1.0)
