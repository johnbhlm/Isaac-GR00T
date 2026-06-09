(function () {
  const LANGS = ["en", "zh_CN"];

  function getVersionsJsonPath() {
    const parts = location.pathname.split("/");          // ["", ..., "v0.2", "zh_CN", "index.html"]
    const verIdx = parts.findIndex(p => /^v\d+\.\d+/.test(p) || p === "latest");
    if (verIdx === -1) return null;                      // 未找到版本号
    const depth = parts.length - verIdx - 1;             // 离版本目录有几层
    return "../".repeat(depth) + "versions.json";
  }

  async function ensureVersionList() {
    const verSel = document.getElementById("ver-switch");
    if (!verSel) return;

    try {
      const path = getVersionsJsonPath();
      if (!path) return;
      const resp = await fetch(path);
      if (!resp.ok) return;                              // 404 时保留模板自带选项
      const vers = await resp.json();                    // ["v0.1","v0.2",...]

      const curVal = verSel.value;
      verSel.innerHTML = "";
      vers.forEach(v => {
        const opt = document.createElement("option");
        opt.value = opt.textContent = v;
        if (v === curVal) opt.selected = true;
        verSel.appendChild(opt);
      });

      const optLatest = document.createElement("option");
      optLatest.value = "latest";
      optLatest.textContent = "Latest";
      verSel.appendChild(optLatest);
    } catch (_) {}
  }

  function parsePath() {
    const parts = location.pathname.split("/").filter(Boolean);
    const langSel = document.getElementById("lang-switch");
    const verSel  = document.getElementById("ver-switch");

    if (!langSel || !verSel) return null;

    const langSet = new Set(LANGS);
    const verSet  = new Set(Array.from(verSel.options).map(o => o.value));

    let idxLang = -1, idxVer = -1;

    for (let i = 0; i < parts.length; ++i) {
      if (idxLang === -1 && langSet.has(parts[i])) idxLang = i;
      if (idxVer === -1 && verSet.has(parts[i]))   idxVer = i;
    }

    if (idxLang > 0 && idxVer >= 0 && idxVer < idxLang)
      return { parts, idxLang, idxVer };
    else
      return null;
  }

  function syncSelectors() {
    const info = parsePath();
    if (!info) return;
    const { parts, idxLang, idxVer } = info;
    const langSel = document.getElementById("lang-switch");
    const verSel  = document.getElementById("ver-switch");
    if (langSel) langSel.value = parts[idxLang];
    if (verSel)  verSel.value  = parts[idxVer];
  }

  async function init() {
    const langSel = document.getElementById("lang-switch");
    const verSel  = document.getElementById("ver-switch");
    if (!langSel || !verSel) return;

    await ensureVersionList();
    syncSelectors();

    const langSet = new Set(LANGS);
    const verSet  = new Set(Array.from(verSel.options).map(o => o.value));

  function jump(newVer, newLang) {
    const info = parsePath();
    if (!info) return;
    const { parts, idxLang, idxVer } = info;
    if (newVer)  parts[idxVer]  = newVer;
    if (newLang) parts[idxLang] = newLang;
    location.href = "/" + parts.join("/");
  }

    langSel.addEventListener("change", () => jump(null, langSel.value));
    verSel .addEventListener("change", () => jump(verSel.value, null));
  }

  if (document.readyState !== "loading") init();
  else document.addEventListener("DOMContentLoaded", init);

  window.addEventListener("pageshow", syncSelectors);
  window.addEventListener("popstate", syncSelectors);
})();
