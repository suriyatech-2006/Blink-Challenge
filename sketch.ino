#define LED_PIN 2

void setup() {
  Serial.begin(115200); // Initialize Serial Monitor
  pinMode(LED_PIN, OUTPUT);
  Serial.println("IoT Device Started - Blinking LED...");
}

void loop() {
  Serial.println("LED ON");
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  
  Serial.println("LED OFF");
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}