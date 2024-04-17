// Definir pines
const int fotoresistenciaPin = A7; // Pin analógico para la fotoresistencia
const int relePin = 13; // Pin digital para el relé

void setup() {
  // Inicializar el pin del relé como salida
  pinMode(relePin, OUTPUT);
}

void loop() {
  // Leer el valor de la fotoresistencia
  int valorLuz = analogRead(fotoresistenciaPin);
  
  // Determinar si hay suficiente luz para encender los LEDs
  if (valorLuz < 500) { // Ajusta este umbral según sea necesario
    // Encender el relé (activar los LEDs)
    digitalWrite(relePin, HIGH);
  } else {
    // Apagar el relé (apagar los LEDs)
    digitalWrite(relePin, LOW);
  }
  
  // Esperar un momento antes de volver a leer el valor de la fotoresistencia
  delay(100);
}
