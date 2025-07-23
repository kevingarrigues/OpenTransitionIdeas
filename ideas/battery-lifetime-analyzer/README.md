# 🔋 Analyseur low-cost pour batteries en fin de vie  
**Analyseur open source pour évaluer l’état de santé des batteries lithium-ion, et orienter leur réutilisation ou recyclage.**

## 🇫🇷 Description

Des millions de batteries de véhicules électriques atteindront leur fin de vie automobile d’ici les prochaines années.  
Pourtant, la majorité conserve entre 60 % et 90 % de leur capacité initiale, ce qui les rend potentiellement utilisables en stockage stationnaire (solaire, secours, microgrid…).

Ce projet propose un **analyseur open-source, autonome, reproductible localement**, permettant d’estimer l’état de santé (SoH) d’une cellule ou d’un module lithium-ion, en vue de :
- Réemploi en mobilité ou stationnaire
- Déclassement ou recyclage sélectif

## 🔧 Fonctionnalités
- Mesure de :
  - Capacité (par décharge contrôlée)
  - Résistance interne (via IR drop ou courant pulsé)
  - Tension nominale / à vide
  - Température
- Interface simple (OLED ou web locale)
- Définition de classes d’usage (réemploi / recyclage)

## 🛠️ Matériel (version de base)
- ESP32 / Raspberry Pi Pico / Arduino Nano
- Module de décharge (CC) ~10–50 W
- Shunt de courant (100 A)
- Écran OLED 128x64
- Sonde température (NTC ou DS18B20)
- Relais ou MOSFET de sécurité
- Boîtier imprimé 3D (open design)
- Logiciel open source (Python ou Arduino C)

## ✅ Avantages
- Reproductible pour < 100 €
- Réduction du gaspillage de batteries encore viables
- Compatible avec modules EV, batteries d’outils, etc.
- Documenté pour fabrication décentralisée

## 🧪 Applications
- Centres de tri
- Ateliers de réemploi
- Zones hors réseau / solaire local
- Recherche sur la seconde vie des batteries

---

# 🔋 Low-cost battery end-of-life analyzer  
**Open-source device to assess lithium-ion battery health and guide second-life or recycling decisions.**

## 🇬🇧 Description

Millions of EV batteries are approaching their end-of-life for vehicle use.  
However, most still retain 60–90 % of their capacity and could be reused in **stationary storage systems** (solar, backup, microgrid...).

This project proposes an **open-source, low-cost analyzer** to estimate the state of health (SoH) of a Li-ion cell or module, and classify it for:
- Reuse in mobility or stationary storage
- Decommissioning or material recycling

## 🔧 Key features
- Measurement of:
  - Capacity (via controlled discharge)
  - Internal resistance (IR drop / pulse)
  - Nominal voltage / OCV
  - Temperature
- Simple user interface (OLED or web UI)
- Automatic classification by SoH

## 🛠️ Hardware (base version)
- ESP32 / Raspberry Pi Pico / Arduino Nano
- Discharge module (CC, ~10–50 W)
- 100 A shunt resistor
- OLED screen 128x64
- Temp sensor (NTC or DS18B20)
- Relay or MOSFET for safety
- 3D-printed case (open design)
- Open-source code (Python or Arduino C)

## ✅ Benefits
- Reproducible for < €100
- Helps avoid premature battery recycling
- Compatible with EV modules, power tools, etc.
- Suitable for decentralized fabrication and training

## 🧪 Use cases
- Battery repair and triage workshops
- DIY solar or microgrid labs
- Circular economy experiments
- Low-resource settings

---

**License:** Creative Commons Attribution 4.0 (CC-BY 4.0)  
**Author:** Kevin GARRIGUES – [OpenTransitionIdeas](https://opentransitionideas.github.io)


