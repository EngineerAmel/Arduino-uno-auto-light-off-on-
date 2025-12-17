// Arduino Uno - LDR Sensor + Relay Control
// LDR HIGH  -> Relay LOW
// LDR LOW   -> Relay HIGH

#define LDR_PIN   2    // LDR digital output pin
#define RELAY_PIN 8    // Relay control pin

void setup() {
  pinMode(LDR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  // Ensure relay is OFF at start
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  int ldrState = digitalRead(LDR_PIN);

  if (ldrState == HIGH) {
    // Bright light detected
    digitalWrite(RELAY_PIN, LOW);   // Relay OFF
  } else {
    // Dark detected
    digitalWrite(RELAY_PIN, HIGH);  // Relay ON
  }

  delay(100); // small stability delay
}