# 📦 Bill of Materials – Battery Lifetime Analyzer

**Objective:** Build a low-cost, open-source device to evaluate the state of health (SoH) of lithium-ion cells or modules.

| Component                     | Description / Specs                        | Quantity | Est. Price (€) | Notes                                      |
|------------------------------|---------------------------------------------|----------|----------------|--------------------------------------------|
| 🎛️ Microcontroller board      | ESP32 DevKitC or Arduino Nano              | 1        | 5–10           | ESP32 recommended for Wi-Fi interface      |
| 🔋 Discharge load             | Constant current module (5–50 W)           | 1        | 8–12           | Adjustable or fixed resistor bank          |
| 📏 Shunt resistor             | 0.01–0.1 Ω / 5–20 W                        | 1        | 1–3            | For current sensing                        |
| 🧪 Voltage divider            | 10 kΩ + 1 kΩ resistors                     | 2        | <1             | Measure cell voltage safely                |
| 🌡️ Temp sensor                | DS18B20 or NTC                             | 1        | 1–2            | Optional but useful                        |
| 🔀 Power MOSFET / Relay       | IRF540N or 10 A relay                      | 1        | 1–3            | Switch battery under load                  |
| 🖥️ OLED screen                | 128x64 I2C (SSD1306)                       | 1        | 2–4            | For local display                          |
| 🔌 Connectors + wires         | XT60 / screw terminals + silicone wires    | —        | 3–5            | Battery connection                         |
| 🔋 Battery holder / terminals| Depends on target cells/modules            | —        | 3–5            | Optional (tools, pouch, 18650, etc.)       |
| ⚙️ Enclosure (3D printed)     | PLA / PETG custom box                      | 1        | —              | Open design to be added                    |
| 🔧 Miscellaneous              | Solder, breadboard, heatshrink             | —        | 3–5            | Assembly and testing tools                 |

---

### 💰 Estimated total: **40–70 €**

*Prices may vary depending on supplier (AliExpress, Mouser, Amazon, local).*

---

## 🛠️ Notes

- You can adapt the design to **evaluate single cells (18650)** or **small modules (up to 48 V)** depending on the input voltage range and discharge power.
- Load selection depends on **cell chemistry, size and discharge C-rate**.
- Optional: add a **microSD card slot** for data logging.

---

**Author:** Kevin GARRIGUES  
**License:** CC-BY 4.0  
