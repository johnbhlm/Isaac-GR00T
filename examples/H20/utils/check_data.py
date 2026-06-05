import os, json, glob
import pandas as pd

root = "/home/bao.he/Code/dataset/h20/lerobot_h20_0325_1_l"
print("DATASET =", root)

print("\n[meta files]")
for p in sorted(glob.glob(os.path.join(root, "meta", "*"))):
    print(" ", os.path.basename(p))

for name in ["info.json", "modality.json"]:
    p = os.path.join(root, "meta", name)
    if os.path.exists(p):
        print(f"\n[{name}]")
        with open(p, "r", encoding="utf-8") as f:
            obj = json.load(f)
        print(json.dumps(obj, indent=2, ensure_ascii=False)[:4000])

parquets = sorted(glob.glob(os.path.join(root, "data", "chunk-*", "*.parquet")))
print("\n[num parquet]", len(parquets))
if parquets:
    p = parquets[0]
    print("[first parquet]", p)
    df = pd.read_parquet(p)
    print("[columns]")
    for c in df.columns:
        v = df[c].iloc[0]
        shape = getattr(v, "shape", None)
        try:
            l = len(v)
        except Exception:
            l = "-"
        print(f"  {c}: type={type(v)}, len={l}, shape={shape}")
    print("\n[first row keys preview]")
    print(df.head(1).T)

print("\n[videos]")
for p in sorted(glob.glob(os.path.join(root, "videos", "chunk-*", "**", "*.mp4"), recursive=True))[:20]:
    print(" ", p)
