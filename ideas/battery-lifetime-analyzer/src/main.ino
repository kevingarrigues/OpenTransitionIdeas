#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

// OLED settings
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Pins
#define VOLTAGE_PIN A0      // Input voltage from battery (via voltage divider)
#define CURRENT_PIN A1      // Voltage across shunt
#define LOAD_PIN    5       // Control load via MOSFET/Relay

// Constants
const float R_SHUNT = 0.1;  // Shunt resistance in ohms
const float V_DIVIDER_RATIO = 11.0; // e.g., 10k & 1k resistors
const float ADC_REF_V = 5.0; // Reference voltage
const int   ADC_RES = 1023;  // 10-bit ADC

// Timing
unsigned long previousMillis = 0;
const long interval = 1000;  // 1 second updates

void setup() {
  Serial.begin(9600);
  pinMode(LOAD_PIN, OUTPUT);
  digitalWrite(LOAD_PIN, LOW); // Start with load off

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 failed"));
    while (true);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Battery Analyzer");
  display.display();
  delay(1000);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    float rawV = analogRead(VOLTAGE_PIN);
    float rawI = analogRead(CURRENT_PIN);

    float voltage = (rawV / ADC_RES) * ADC_REF_V * V_DIVIDER_RATIO;
    float shuntVoltage = (rawI / ADC_RES) * ADC_REF_V;
    float current = shuntVoltage / R_SHUNT;

    display.clearDisplay();
    display.setCursor(0, 0);
    display.print("Voltage: ");
    display.print(voltage, 2);
    display.println(" V");

    display.print("Current: ");
    display.print(current, 2);
    display.println(" A");

    // Simple classification
    if (voltage < 3.2) {
      display.println("SoH: Low");
    } else if (voltage < 3.7) {
      display.println("SoH: Mid");
    } else {
      display.println("SoH: High");
    }

    display.display();

    Serial.print("V=");
    Serial.print(voltage);
    Serial.print("V, I=");
    Serial.print(current);
    Serial.println("A");
  }
}
