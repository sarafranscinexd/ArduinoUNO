const int ledPinRed = 13; // LED vermelho
const int ledPinGreen = 12; // LED verde

unsigned long previousMillisRed = 0;
unsigned long previousMillisGreen = 0;

const long intervalRed = 1000;   // 1 segundo para vermelho
const long intervalGreen = 500;   // 0,5 segundos para verde

void setup() {
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // Para LED vermelho
  if (currentMillis - previousMillisRed >= intervalRed) {
    previousMillisRed = currentMillis;
    digitalWrite(ledPinRed, !digitalRead(ledPinRed)); // Alterna o estado do LED
  }

  // Para LED verde
  if (currentMillis - previousMillisGreen >= intervalGreen) {
    previousMillisGreen = currentMillis;
    digitalWrite(ledPinGreen, !digitalRead(ledPinGreen)); // Alterna o estado do LED
  }
}
