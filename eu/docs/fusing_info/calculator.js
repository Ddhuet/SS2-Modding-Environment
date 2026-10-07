'use strict';

const state = {
  data: null,
  character: 'Warrior',
  equipment: { weapon: null, head: null, body: null, hand: null, accessory: null },
  ores: [
    { material: 'mithril', value: 0 }, { material: 'mithril', value: 0 }, { material: 'mithril', value: 0 },
  ],
  targetSlot: null,
  inspector: null,
};

const characters = ['Warrior', 'Sorceress', 'Archer', 'Dragonute', 'Priestess', 'Brawler', 'Dark Wizard', 'Ninja'];
const materialMeta = {
  mithril: { name: 'Mithril', divisor: 10, icon: '08F0.gif' },
  orihalcon: { name: 'Orihalcon', divisor: 25, icon: '08F1.gif' },
  'dark-matter': { name: 'Dark Matter', divisor: 20, icon: '08F2.gif' },
  bone: { name: 'Bone', divisor: 1, icon: '08F3.gif' },
  scale: { name: 'Scale', divisor: 2, icon: '08F4.gif' },
};
const materialIconRoot = 'old_calculator/Shining Soul II Shrine - Fuse List_files/';
const abilityIconRoot = 'items/swords/Shining Soul II Shrine_files/';
const statNames = { attack: 'ATK', defense: 'DEF', strength: 'STR', dexterity: 'DEX', intelligence: 'INT', vitality: 'VIT', hp: 'HP', sp: 'SP' };
const statMeta = {
  ATK: { width: 26, height: 28 }, DEF: { width: 26, height: 28 }, DEX: { width: 26, height: 26 }, INT: { width: 26, height: 28 },
  RDK: { width: 26, height: 28 }, RFR: { width: 26, height: 28 }, RIC: { width: 26, height: 28 }, RLT: { width: 26, height: 28 },
  RPO: { width: 26, height: 28 }, RTH: { width: 26, height: 28 }, STR: { width: 26, height: 28 }, VIT: { width: 26, height: 28 },
};
const $ = (selector, root = document) => root.querySelector(selector);
const $$ = (selector, root = document) => [...root.querySelectorAll(selector)];
const escapeHtml = (value = '') => String(value).replace(/[&<>'"]/g, (char) => ({ '&': '&amp;', '<': '&lt;', '>': '&gt;', "'": '&#39;', '"': '&quot;' })[char]);
const titleCase = (value = '') => String(value).replaceAll('_', ' ').replace(/\b\w/g, (letter) => letter.toUpperCase());

async function loadData() {
  const files = ['weapons.json', 'armor.json', 'accessories.json', 'fusing.json', 'equipment_sets.json', 'item_attributes.json'];
  const [weapons, armor, accessories, fusing, equipmentSets, attributes] = await Promise.all(files.map(async (file) => {
    const response = await fetch(file);
    if (!response.ok) throw new Error(`Could not load ${file}`);
    return response.json();
  }));
  const items = [
    ...weapons.items.map((item) => ({ ...item, kind: 'weapon' })),
    ...armor.items.map((item) => ({ ...item, kind: 'armor' })),
    ...accessories.items.map((item) => ({ ...item, kind: 'accessory' })),
  ];
  const byId = new Map(items.map((item) => [item.sourceId, item]));
  const byName = new Map();
  items.forEach((item) => { if (!byName.has(item.name)) byName.set(item.name, item); });
  equipmentSets.sets.forEach((set, index) => { set._index = index; });
  state.data = { weapons, armor, accessories, fusing, equipmentSets, attributes, items, byId, byName };
  $('#data-status').textContent = `${items.length.toLocaleString()} items · ${equipmentSets.sets.length} sets`;
  $('#data-status').classList.add('ready');
}

function itemSlot(item) {
  if (item.kind === 'weapon') return 'weapon';
  if (item.kind === 'accessory') return 'accessory';
  return item.category;
}
function inherentAbility(item) {
  const element = item.nameIcons?.[0]?.element;
  return element === 'darkness' ? 'dark' : element || '';
}
function newInstance(item) { return { item, suffix: '', grind: 0, ability: inherentAbility(item) }; }
function copyInstance(instance) { return { item: instance.item, suffix: instance.suffix || '', grind: Number(instance.grind) || 0, ability: instance.ability ?? inherentAbility(instance.item) }; }
function elementIcon(item, className = 'element-icon-small') {
  const icon = item.nameIcons?.[0];
  return icon ? `<img class="${className}" src="${abilityIconRoot}${icon.image}" alt="${escapeHtml(icon.label || icon.element)}" title="${escapeHtml(icon.label || icon.element)}">` : '';
}
function statIcon(code, className = 'stat-icon') {
  const normalized = String(code || '').toUpperCase();
  const meta = statMeta[normalized];
  return meta ? `<img class="${className}" src="stats/${normalized}.gif" width="${meta.width}" height="${meta.height}" alt="${normalized}" title="${normalized}">` : '';
}
function formatStatText(text) {
  return escapeHtml(text).replace(/\b(ATK|DEF|DEX|INT|RDK|RFR|RIC|RLT|RPO|RTH|STR|VIT)\b/g, (code) => statIcon(code));
}
function totalStatLabel(key) {
  return statIcon(key, 'total-stat-icon') || escapeHtml(key);
}
function displayName(instance) {
  const suffix = instance.suffix ? ` of ${instance.suffix}` : '';
  const grind = instance.item.kind === 'accessory' || !instance.grind ? '' : ` +${instance.grind}`;
  return `${instance.item.name}${suffix}${grind}`;
}
function compatibleWithCharacter(item) { return !item.usableClasses || item.usableClasses.includes(state.character); }

function renderCharacterMenu() {
  $('#character-menu').innerHTML = characters.map((name) => `
    <button class="menu-row ${name === state.character ? 'selected' : ''}" type="button" role="option" aria-selected="${name === state.character}" data-character="${name}">
      <img src="characters/${name.replace(' ', '_')}.gif" alt=""><span>${name}</span>
    </button>`).join('');
}
function toggleCharacterMenu(force) {
  const menu = $('#character-menu');
  const shouldOpen = typeof force === 'boolean' ? force : menu.hidden;
  menu.hidden = !shouldOpen;
  $('#character-button').setAttribute('aria-expanded', String(shouldOpen));
}

function slotItems(slot, query = '') {
  const normalized = query.trim().toLowerCase();
  return state.data.items.filter((item) => itemSlot(item) === slot && item.name.toLowerCase().includes(normalized))
    .sort((a, b) => Number(compatibleWithCharacter(b)) - Number(compatibleWithCharacter(a)) || a.name.localeCompare(b.name));
}
function compatibleCount(slot) { return state.data.items.filter((item) => itemSlot(item) === slot && compatibleWithCharacter(item)).length; }
function itemResultButton(item, action) {
  const compatibility = compatibleWithCharacter(item) ? '' : `<em>Not for ${escapeHtml(state.character)}</em>`;
  return `<button class="menu-row item-row" type="button" data-action="${action}" data-item-id="${item.sourceId}">
    <img src="${encodeURI(item.imagePath)}" alt=""><span><b>${elementIcon(item)}<span class="item-name-text">${escapeHtml(item.name)}</span></b><small>${titleCase(item.category)} ${compatibility}</small></span>
  </button>`;
}
function renderSlotPicker(slot, query = '') {
  state.targetSlot = slot;
  const picker = $('#slot-picker');
  const label = { weapon: 'weapon', head: 'head armor', body: 'body armor', hand: 'hand armor', accessory: 'accessory' }[slot];
  const results = slotItems(slot, query);
  picker.hidden = false;
  picker.innerHTML = `<div class="picker-heading"><div><span>Choose ${label}</span><small>${compatibleCount(slot)} compatible with ${state.character}</small></div><div class="picker-tools">${state.equipment[slot] ? '<button type="button" data-clear-slot>Clear slot</button>' : ''}<button type="button" data-close-picker aria-label="Close picker">×</button></div></div>
    <input id="slot-search" type="search" value="${escapeHtml(query)}" placeholder="Search anywhere in the name…" autocomplete="off">
    <div class="picker-results">${results.length ? results.map((item) => itemResultButton(item, 'pick-item')).join('') : '<p class="empty-copy">No matching items.</p>'}</div>`;
  requestAnimationFrame(() => {
    const input = $('#slot-search');
    if (!input) return;
    input.focus();
    input.setSelectionRange(input.value.length, input.value.length);
  });
}
function renderSlotResults(slot, query = '') {
  const results = slotItems(slot, query);
  const container = $('.picker-results', $('#slot-picker'));
  if (!container) return;
  container.innerHTML = results.length ? results.map((item) => itemResultButton(item, 'pick-item')).join('') : '<p class="empty-copy">No matching items.</p>';
}

function renderEquipment() {
  Object.entries(state.equipment).forEach(([slot, instance]) => {
    const button = $(`[data-slot="${slot}"] .item-slot`);
    button.classList.toggle('filled', Boolean(instance));
    button.title = instance ? displayName(instance) : `Choose ${slot}`;
    button.innerHTML = instance ? `<img src="${encodeURI(instance.item.imagePath)}" alt="${escapeHtml(displayName(instance))}">` : '<span>+</span>';
  });
  renderTotals();
}
function addBonus(totals, key, value) {
  if (!Number.isFinite(Number(value))) return;
  const normalized = statNames[key] || key.toUpperCase();
  totals[normalized] = (totals[normalized] || 0) + Number(value);
}
function effectBonuses(effect, totals) {
  if (effect.type === 'stat_bonus') addBonus(totals, effect.stat, effect.value);
  if (effect.type === 'resistance_bonus') addBonus(totals, effect.code || effect.resistance, effect.value);
  if (effect.type === 'attack_bonus') addBonus(totals, 'ATK', effect.value);
  if (effect.type === 'defense_bonus') addBonus(totals, 'DEF', effect.value);
}
function parseTextBonuses(text, totals) {
  for (const match of String(text).matchAll(/\b(ATK|DEF|STR|DEX|INT|VIT|RFR|RIC|RTH|RPO|RLT|RDK)\s*([+-]\s*\d+)/gi)) addBonus(totals, match[1], Number(match[2].replace(/\s/g, '')));
}
function completedSets() {
  const equippedNames = new Set(Object.values(state.equipment).filter(Boolean).map((instance) => instance.item.name));
  return state.data.equipmentSets.sets.filter((set) => set.items.every((name) => equippedNames.has(name)));
}

function resolveSetItem(set, name) {
  const candidates = state.data.items.filter((item) => item.name === name && item.sets?.includes(set.name));
  if (candidates.length < 2) return candidates[0] || state.data.byName.get(name);
  return candidates.find((item) => !item.usableClasses || item.usableClasses.some((className) => set.usableClasses?.includes(className))) || candidates[0];
}
function renderTotals() {
  if (!state.data) return;
  const totals = {};
  const notes = [];
  const equippedArmor = Object.values(state.equipment).filter((instance) => instance?.item.kind === 'armor');
  Object.values(state.equipment).filter(Boolean).forEach((instance) => {
    const { item } = instance;
    if (Number.isFinite(item.atk)) addBonus(totals, 'ATK', item.atk + instance.grind);
    if (Number.isFinite(item.defense)) addBonus(totals, 'DEF', item.defense + instance.grind);
    (item.specialEffects || []).forEach((effect) => {
      effectBonuses(effect, totals);
      if (!['stat_bonus', 'resistance_bonus', 'attack_bonus', 'defense_bonus'].includes(effect.type)) notes.push(`${item.name}: ${effectText(effect)}`);
    });
    const suffix = state.data.attributes.suffixes.find((entry) => entry.name === instance.suffix);
    Object.entries(suffix?.bonuses || {}).forEach(([key, value]) => addBonus(totals, key, value));
    if (suffix?.effect && !suffix.bonuses) notes.push(suffix.effect);
  });
  const sets = completedSets();
  const minimumStrength = equippedArmor.length
    ? Math.max(...equippedArmor.map((instance) => Number(instance.item.requiredStrength) || 0))
    : null;
  sets.forEach((set) => set.effects.forEach((effect) => { const count = Object.keys(totals).length; parseTextBonuses(effect, totals); if (count === Object.keys(totals).length && !/[+-]\d/.test(effect)) notes.push(effect); }));
  const entries = Object.entries(totals).filter(([, value]) => value !== 0);
  $('#loadout-totals').innerHTML = entries.length || sets.length || notes.length || minimumStrength !== null ? `
    <div class="totals-grid">${entries.map(([key, value]) => `<div><span>${totalStatLabel(key)}</span><strong>${value > 0 ? '+' : ''}${value}</strong></div>`).join('')}</div>
    ${sets.length ? `<div class="set-active">${sets.map((set) => `<button type="button" data-set-index="${set._index}">✦ ${escapeHtml(set.name)}</button>`).join('')}</div>` : ''}
    ${notes.length ? `<p class="bonus-notes">${[...new Set(notes)].map(escapeHtml).join(' · ')}</p>` : ''}
    ${minimumStrength !== null ? `<p class="minimum-strength">Minimum STR: ${minimumStrength}</p>` : ''}` : '<p class="empty-copy">Choose equipment to build a loadout.</p>';
}

function globalMatches(query) {
  const normalized = query.trim().toLowerCase();
  const items = state.data.items.filter((item) => item.name.toLowerCase().includes(normalized)).map((value) => ({ type: 'item', value }));
  const sets = state.data.equipmentSets.sets.filter((set) => set.name.toLowerCase().includes(normalized)).map((value) => ({ type: 'set', value }));
  return [...sets, ...items].sort((a, b) => a.value.name.localeCompare(b.value.name) || a.type.localeCompare(b.type));
}
function renderGlobalResults(query) {
  const container = $('#global-results');
  const matches = globalMatches(query);
  container.hidden = false;
  container.innerHTML = matches.length ? matches.map((match) => match.type === 'item' ? itemResultButton(match.value, 'inspect-item')
    : `<button class="menu-row set-row" type="button" data-set-index="${match.value._index}"><span class="set-glyph">✦</span><span><b>${escapeHtml(match.value.name)}</b><small>${match.value.items.length} pieces · ${escapeHtml(match.value.usableClasses?.join(', ') || 'all classes')}</small></span></button>`).join('')
    : '<p class="empty-copy search-empty">No matching items or sets.</p>';
}

function effectText(effect) {
  if (effect.raw) return effect.raw.replace(/\.gif/gi, '');
  if (effect.type === 'stat_bonus') return `${statNames[effect.stat] || titleCase(effect.stat)} ${effect.value >= 0 ? '+' : ''}${effect.value}`;
  if (effect.type === 'resistance_bonus') return `${titleCase(effect.resistance || effect.code)} resistance ${effect.value >= 0 ? '+' : ''}${effect.value}`;
  if (effect.type === 'status') return titleCase(effect.status);
  if (effect.type === 'combat_modifier') {
    const label = effect.sourceType === 'critical_hit' ? 'Critical hit' : effect.sourceType === 'recoil_modifier' ? 'Recoil' : titleCase(effect.sourceType || effect.attribute || 'Combat');
    return `${label} ${effect.value >= 0 ? '+' : ''}${effect.value}`;
  }
  if (effect.type === 'speed_modifier') {
    const labels = { attack_speed: 'Attack speed', walking_speed: 'Walking speed', sp_recovery_speed: 'SP recovery speed' };
    return `${labels[effect.sourceType] || titleCase(effect.sourceType || effect.attribute || 'Speed')} ${effect.value >= 0 ? '+' : ''}${effect.value}`;
  }
  if (effect.type === 'damage_bonus') return `${effect.value >= 0 ? '+' : ''}${effect.value}% damage to ${(effect.target || []).map(titleCase).join(', ')}`;
  if (effect.type === 'damage_to_hp_percent') return `${effect.value}% of damage goes to HP`;
  if (effect.type === 'damage_to_sp_percent') return `${effect.value}% of damage goes to SP`;
  if (effect.type === 'resource_cost_modifier') return `Charge attack SP cost ${effect.value >= 0 ? '+' : ''}${effect.value}`;
  if (effect.type === 'charge_time_modifier') return `Charge time ${effect.value >= 0 ? '+' : ''}${effect.value}`;
  if (effect.type === 'effect_immunity') return 'Raises immunity to effects';
  return Object.entries(effect).filter(([key]) => key !== 'type').map(([key, value]) => `${titleCase(key)} ${Array.isArray(value) ? value.join(', ') : value}`).join(' · ') || titleCase(effect.type);
}
function effectMarkup(effect) {
  if (effect.type === 'stat_bonus') {
    const code = effect.code || statNames[effect.stat];
    return `${statIcon(code) || `<span>${escapeHtml(code)}</span>`}<span>${effect.value >= 0 ? '+' : ''}${effect.value}</span>`;
  }
  if (effect.type === 'resistance_bonus') return `${statIcon(effect.code)}<span>${effect.value >= 0 ? '+' : ''}${effect.value}</span>`;
  return escapeHtml(effectText(effect));
}
function recipeLabel(reference) {
  const recipe = state.data.fusing.recipes.find((entry) => entry.id === reference.recipeId);
  return recipe ? `${recipe.materials.map((id) => materialMeta[id]?.name || id).join(' + ')} · Grade ${reference.grade}` : `${reference.recipeId} · Grade ${reference.grade}`;
}
function recipeMarkup(reference) {
  const recipe = state.data.fusing.recipes.find((entry) => entry.id === reference.recipeId);
  if (!recipe) return `<span>Grade ${reference.grade}</span>`;
  return `<span class="recipe-ores">${recipe.materials.map((id) => {
    const material = materialMeta[id];
    return material ? `<img src="${materialIconRoot}${material.icon}" width="32" height="32" alt="${escapeHtml(material.name)}" title="${escapeHtml(material.name)}">` : '';
  }).join('')}</span><span class="recipe-grade">Grade ${reference.grade}</span>`;
}
function inspectItem(item, instance = newInstance(item), targetSlot = itemSlot(item)) {
  state.targetSlot = targetSlot;
  state.inspector = { type: 'item', instance: copyInstance(instance) };
  renderInspector();
}
function renderInspector() {
  if (!state.inspector) return;
  if (state.inspector.type === 'set') { renderSetInspector(state.inspector.set); return; }
  const instance = state.inspector.instance;
  const item = instance.item;
  const suffix = state.data.attributes.suffixes.find((entry) => entry.name === instance.suffix);
  const ability = state.data.attributes.weaponAbilities.find((entry) => entry.id === instance.ability);
  const effects = [];
  if (Number.isFinite(item.atk)) effects.push(`<li><span>Base stat</span><strong class="icon-value">${statIcon('ATK')}<span>${item.atk + instance.grind}</span></strong>${instance.grind ? `<small>${item.atk} base + ${instance.grind} grind</small>` : ''}</li>`);
  if (Number.isFinite(item.defense)) effects.push(`<li><span>Base stat</span><strong class="icon-value">${statIcon('DEF')}<span>${item.defense + instance.grind}</span></strong>${instance.grind ? `<small>${item.defense} base + ${instance.grind} grind</small>` : ''}</li>`);
  (item.specialEffects || []).forEach((effect) => effects.push(`<li><span>Effect</span><strong class="${['stat_bonus', 'resistance_bonus'].includes(effect.type) ? 'icon-value' : ''}">${effectMarkup(effect)}</strong></li>`));
  if (suffix) effects.push(`<li class="suffix-effect"><span>Suffix</span><strong class="formatted-effect">${formatStatText(suffix.effect)}</strong></li>`);
  if (ability) effects.push(`<li><span>Ability</span><strong class="ability-effect"><img src="${abilityIconRoot}${ability.icon}" alt="${escapeHtml(ability.name)}"> damage</strong></li>`);
  const recipeRefs = item.fusingRecipes || [];
  $('#inspector-type').textContent = titleCase(item.category);
  $('#inspector').className = 'inspector-content item-inspector';
  const usableClasses = item.usableClasses || characters;
  const requirement = item.weaponSkill ? `Requires: ${titleCase(item.weaponSkill.type)} ${item.weaponSkill.requiredLevel}` : item.kind === 'armor' ? `Required STR: ${item.requiredStrength}` : '';
  $('#inspector').innerHTML = `<div class="item-hero"><div class="item-icon-large"><img src="${encodeURI(item.imagePath)}" alt=""></div><div class="item-identity"><p class="eyebrow">${escapeHtml(titleCase(item.category))}</p><h3>${ability ? `<img class="ability-inline" src="${abilityIconRoot}${ability.icon}" width="16" height="24" alt="${ability.name}">` : ''}${escapeHtml(displayName(instance))}</h3><div class="equip-eligibility"><div class="class-sprites" aria-label="Usable by ${escapeHtml(usableClasses.join(', '))}">${usableClasses.map((className) => `<img src="characters/${className.replace(' ', '_')}.gif" width="32" height="32" alt="${escapeHtml(className)}" title="${escapeHtml(className)}">`).join('')}</div>${requirement ? `<span class="item-requirement">${escapeHtml(requirement)}</span>` : ''}</div></div></div>
    ${item.kind !== 'accessory' ? `<div class="modifier-bar">${item.kind === 'weapon' ? `<label class="ability-control"><span>Weapon ability</span><div class="ability-picker"><button type="button" data-ability-menu aria-label="Choose weapon ability" aria-expanded="false">${ability ? `<img src="${abilityIconRoot}${ability.icon}" alt="${escapeHtml(ability.name)}">` : '<b>—</b>'}<i>⌄</i></button><div class="ability-menu picker-menu" hidden><button type="button" data-ability-id="" title="None"><b>—</b></button>${state.data.attributes.weaponAbilities.map((entry) => `<button type="button" data-ability-id="${entry.id}" title="${escapeHtml(entry.name)}"><img src="${abilityIconRoot}${entry.icon}" alt="${escapeHtml(entry.name)}"></button>`).join('')}</div></div></label>` : ''}<label><span>Item suffix</span><select id="suffix-select"><option value="">None</option>${state.data.attributes.suffixes.map((entry) => `<option value="${escapeHtml(entry.name)}" ${entry.name === instance.suffix ? 'selected' : ''}>of ${escapeHtml(entry.name)}</option>`).join('')}</select></label><label class="grind-label"><span>Level</span><select id="grind-select">${Array.from({ length: 21 }, (_, index) => `<option value="${index}" ${index === instance.grind ? 'selected' : ''}>+${index}</option>`).join('')}</select></label></div>` : ''}
    ${!compatibleWithCharacter(item) ? `<p class="compatibility-warning">${escapeHtml(state.character)} cannot equip this item.</p>` : ''}
    <ul class="effect-list">${effects.join('') || '<li><span>Effect</span><strong>No inherent bonuses</strong></li>'}</ul>
    ${item.sets?.length ? `<div class="link-section"><span>Equipment sets</span>${item.sets.map((name) => { const set = state.data.equipmentSets.sets.find((entry) => entry.name === name && entry.items.includes(item.name)); return `<button type="button" ${set ? `data-set-index="${set._index}"` : `data-set-name="${escapeHtml(name)}"`}>${escapeHtml(name)} →</button>`; }).join('')}</div>` : ''}
    ${recipeRefs.length ? `<div class="link-section recipes"><span>Forge recipes</span>${recipeRefs.map((reference) => `<button type="button" data-recipe-id="${reference.recipeId}" data-grade="${reference.grade}" aria-label="${escapeHtml(recipeLabel(reference))}">${recipeMarkup(reference)}</button>`).join('')}</div>` : ''}
    <div class="inspector-actions"><button class="primary-action" type="button" data-equip-item ${compatibleWithCharacter(item) ? '' : 'disabled'}>Equip in ${state.targetSlot?.toUpperCase() || itemSlot(item).toUpperCase()}</button><button class="secondary-action" type="button" data-send-forge ${recipeRefs.length ? '' : 'disabled'}>Send to forge</button></div>`;
}

function inspectSet(identifier) {
  const set = Number.isInteger(identifier) ? state.data.equipmentSets.sets[identifier] : state.data.equipmentSets.sets.find((entry) => entry.name === identifier);
  if (!set) return;
  state.inspector = { type: 'set', set };
  renderSetInspector(set);
}
function renderSetInspector(set) {
  $('#inspector-type').textContent = 'Equipment set';
  $('#inspector').className = 'inspector-content set-inspector';
  $('#inspector').innerHTML = `<div class="set-mark">✦</div><p class="eyebrow">Equipment set</p><h3>${escapeHtml(set.name)}</h3><p class="set-classes">${escapeHtml(set.usableClasses?.join(', ') || 'All classes')}${Number.isFinite(set.requiredStrength) ? ` · ${set.requiredStrength} STR` : ''}</p>
    <div class="set-piece-list">${set.items.map((name) => { const item = resolveSetItem(set, name); return item ? itemResultButton(item, 'inspect-item') : `<div class="missing-row">${escapeHtml(name)}</div>`; }).join('')}</div>
    <div class="set-bonus"><span>Complete set bonus</span>${set.effects.map((effect) => `<strong class="formatted-effect">${formatStatText(effect)}</strong>`).join('')}</div>`;
}
function equipInspectorItem() {
  if (state.inspector?.type !== 'item') return;
  const instance = copyInstance(state.inspector.instance);
  const slot = itemSlot(instance.item);
  state.equipment[slot] = instance;
  state.targetSlot = slot;
  renderEquipment();
  inspectItem(instance.item, instance, slot);
}

function orePoints(ore) { return Math.max(0, Number(ore.value) || 0) / materialMeta[ore.material].divisor; }
function forgeGrade(points) {
  const wholePoints = Math.floor(points);
  const threshold = [...state.data.fusing.trinityGradeThresholds].reverse().find((entry) => wholePoints >= entry.minimumPoints);
  return threshold?.grade ?? 0;
}
function recipeMatches(recipe, materials) {
  if (recipe.materials.length === 1) return false;
  if (recipe.orderMatters) return recipe.materials.every((material, index) => material === materials[index]);
  return [...recipe.materials].sort().join('|') === [...materials].sort().join('|');
}
function currentForgeRecipe() {
  const materials = state.ores.map((ore) => ore.material);
  const exact = state.data.fusing.recipes.find((recipe) => recipeMatches(recipe, materials));
  if (exact) return exact;
  const special = materials.find((material) => material === 'bone' || material === 'scale');
  return special ? state.data.fusing.recipes.find((recipe) => recipe.id === `${special}-non-trinity`) : null;
}
function renderOreSlots() {
  $('#ore-slots').innerHTML = state.ores.map((ore, index) => {
    const material = materialMeta[ore.material];
    return `<div class="ore-control"><button class="ore-button" type="button" data-ore-menu="${index}" aria-label="Change ${material.name}" aria-expanded="false"><img src="${materialIconRoot}${material.icon}" alt="${material.name}"><span>⌄</span></button>
      <div class="ore-menu picker-menu" data-ore-options="${index}" hidden>${Object.entries(materialMeta).map(([id, entry]) => `<button type="button" data-ore-index="${index}" data-material="${id}" title="${entry.name}"><img src="${materialIconRoot}${entry.icon}" alt="${entry.name}"></button>`).join('')}</div>
      <label><span>${material.name} value</span><input type="number" inputmode="numeric" min="0" max="9999" step="1" value="${ore.value || ''}" placeholder="0" data-ore-value="${index}"><small>gold</small></label></div>`;
  }).join('');
}
function renderForge() {
  const points = state.ores.reduce((total, ore) => total + orePoints(ore), 0);
  const calculatedGrade = forgeGrade(points);
  const recipe = currentForgeRecipe();
  const isNonTrinity = recipe?.materials.length === 1;
  const grade = isNonTrinity ? 0 : calculatedGrade;
  const gradeEntry = recipe?.grades.find((entry) => entry.grade === grade);
  const results = (gradeEntry?.items || []).map((reference) => state.data.byId.get(reference.sourceId) || state.data.byName.get(reference.name)).filter(Boolean);
  $('#forge-grade').textContent = `Grade ${grade}${isNonTrinity ? ' · non-trinity' : ''}`;
  $('#forge-points').textContent = String(Math.floor(points));
  $('#result-count').textContent = `${results.length} item${results.length === 1 ? '' : 's'}`;
  $('#forge-results').innerHTML = results.length ? results.map((item) => `<button class="result-row" type="button" data-action="inspect-item" data-item-id="${item.sourceId}"><img src="${encodeURI(item.imagePath)}" alt=""><span class="result-name">${elementIcon(item)}<span>${escapeHtml(item.name)}</span></span><small>Inspect</small></button>`).join('')
    : `<p class="empty-copy">${recipe ? `No Grade ${grade} results for this recipe. Raise the material values to reach the next grade.` : 'This material combination has no recipe.'}</p>`;
}
function sendInspectorToForge(referenceOverride) {
  if (state.inspector?.type !== 'item') return;
  const reference = referenceOverride || (state.inspector.instance.item.fusingRecipes || [])[0];
  if (!reference) return;
  const recipe = state.data.fusing.recipes.find((entry) => entry.id === reference.recipeId);
  if (!recipe) return;
  const materials = recipe.materials.length === 3 ? recipe.materials : [recipe.materials[0], 'mithril', 'orihalcon'];
  const threshold = state.data.fusing.trinityGradeThresholds.find((entry) => entry.grade === reference.grade)?.minimumPoints || 0;
  state.ores = materials.map((material) => ({ material, value: Math.ceil((threshold / 3) * materialMeta[material].divisor) }));
  renderOreSlots();
  renderForge();
  $('.forge-panel').scrollIntoView({ behavior: 'smooth', block: 'start' });
}
function closeFloatingMenus(except) { $$('.ore-menu').forEach((menu) => { if (menu !== except) menu.hidden = true; }); }

function bindEvents() {
  $('#character-button').addEventListener('click', () => toggleCharacterMenu());
  $('#character-name').addEventListener('click', () => toggleCharacterMenu());
  $('#character-menu').addEventListener('click', (event) => {
    const button = event.target.closest('[data-character]');
    if (!button) return;
    state.character = button.dataset.character;
    $('#character-button img').src = `characters/${state.character.replace(' ', '_')}.gif`;
    $('#character-button img').alt = state.character;
    $('#character-name').innerHTML = `${state.character} <span>⌄</span>`;
    renderCharacterMenu(); toggleCharacterMenu(false); renderTotals();
    if (!$('#slot-picker').hidden && state.targetSlot) renderSlotPicker(state.targetSlot, $('#slot-search')?.value || '');
    if (state.inspector?.type === 'item') renderInspector();
  });
  $('#paper-doll').addEventListener('click', (event) => {
    const wrap = event.target.closest('[data-slot]'); if (!wrap) return;
    const slot = wrap.dataset.slot; const equipped = state.equipment[slot]; renderSlotPicker(slot);
    if (equipped) inspectItem(equipped.item, equipped, slot);
  });
  $('#slot-picker').addEventListener('input', (event) => { if (event.target.id === 'slot-search') renderSlotResults(state.targetSlot, event.target.value); });
  $('#slot-picker').addEventListener('click', (event) => {
    if (event.target.closest('[data-close-picker]')) { $('#slot-picker').hidden = true; return; }
    if (event.target.closest('[data-clear-slot]')) { state.equipment[state.targetSlot] = null; $('#slot-picker').hidden = true; renderEquipment(); return; }
    const button = event.target.closest('[data-action="pick-item"]'); if (!button) return;
    const item = state.data.byId.get(button.dataset.itemId); const instance = newInstance(item);
    state.equipment[state.targetSlot] = instance; $('#slot-picker').hidden = true; renderEquipment(); inspectItem(item, instance, state.targetSlot);
  });
  $('#global-search').addEventListener('input', (event) => renderGlobalResults(event.target.value));
  $('#global-search').addEventListener('focus', (event) => renderGlobalResults(event.target.value));
  $('#global-search').addEventListener('keydown', (event) => { if (event.key === 'Escape') $('#global-results').hidden = true; });
  document.addEventListener('click', (event) => {
    const itemButton = event.target.closest('[data-action="inspect-item"]');
    if (itemButton) { const item = state.data.byId.get(itemButton.dataset.itemId); if (item) inspectItem(item); $('#global-results').hidden = true; return; }
    const setButton = event.target.closest('[data-set-index], [data-set-name]');
    if (setButton) { inspectSet(setButton.dataset.setIndex === undefined ? setButton.dataset.setName : Number(setButton.dataset.setIndex)); $('#global-results').hidden = true; return; }
    if (!event.target.closest('.global-search-wrap')) $('#global-results').hidden = true;
    if (!event.target.closest('.character-wrap')) toggleCharacterMenu(false);
    if (!event.target.closest('.ability-picker')) $$('.ability-menu').forEach((menu) => { menu.hidden = true; });
  });
  $('#inspector').addEventListener('change', (event) => {
    if (state.inspector?.type !== 'item') return;
    if (event.target.id === 'ability-select') state.inspector.instance.ability = event.target.value;
    if (event.target.id === 'suffix-select') state.inspector.instance.suffix = event.target.value;
    if (event.target.id === 'grind-select') state.inspector.instance.grind = Number(event.target.value);
    renderInspector();
  });
  $('#inspector').addEventListener('click', (event) => {
    const abilityToggle = event.target.closest('[data-ability-menu]');
    if (abilityToggle) {
      const menu = $('.ability-menu', $('#inspector'));
      menu.hidden = !menu.hidden;
      abilityToggle.setAttribute('aria-expanded', String(!menu.hidden));
      return;
    }
    const abilityOption = event.target.closest('[data-ability-id]');
    if (abilityOption && state.inspector?.type === 'item') {
      state.inspector.instance.ability = abilityOption.dataset.abilityId;
      renderInspector();
      return;
    }
    if (event.target.closest('[data-equip-item]')) equipInspectorItem();
    if (event.target.closest('[data-send-forge]')) sendInspectorToForge();
    const recipeButton = event.target.closest('[data-recipe-id]');
    if (recipeButton) sendInspectorToForge({ recipeId: recipeButton.dataset.recipeId, grade: Number(recipeButton.dataset.grade) });
  });
  $('#ore-slots').addEventListener('click', (event) => {
    const toggle = event.target.closest('[data-ore-menu]');
    if (toggle) { const menu = $(`[data-ore-options="${toggle.dataset.oreMenu}"]`); const open = menu.hidden; closeFloatingMenus(menu); menu.hidden = !open; toggle.setAttribute('aria-expanded', String(open)); return; }
    const option = event.target.closest('[data-material]');
    if (option) { state.ores[Number(option.dataset.oreIndex)].material = option.dataset.material; renderOreSlots(); renderForge(); }
  });
  $('#ore-slots').addEventListener('input', (event) => {
    if (!event.target.matches('[data-ore-value]')) return;
    state.ores[Number(event.target.dataset.oreValue)].value = Math.max(0, Math.min(9999, Number(event.target.value) || 0)); renderForge();
  });
}

document.addEventListener('DOMContentLoaded', async () => {
  renderCharacterMenu();
  try { await loadData(); renderOreSlots(); renderForge(); renderEquipment(); bindEvents(); }
  catch (error) { $('#data-status').textContent = error.message; $('#data-status').classList.add('error'); console.error(error); }
});
