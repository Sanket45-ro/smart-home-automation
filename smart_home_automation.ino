// Smart Home Automation System

// Pin Definitions
const int trigPin = 9;
const int echoPin = 10;
const int buttonLight = 2;
const int buttonFan = 3;
const int ledLight = 6;
const int ledFan = 7;

// Variables
long duration;
int distance;
int lightState = LOW;
int fanState = LOW;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonLight, INPUT);
  pinMode(buttonFan, INPUT);
  pinMode(ledLight, OUTPUT);
  pinMode(ledFan, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Push Button Control
  if (digitalRead(buttonLight) == HIGH) {
    lightState = !lightState;
    digitalWrite(ledLight, lightState);
    delay(300); // Debounce delay
  }

  if (digitalRead(buttonFan) == HIGH) {
    fanState = !fanState;
    digitalWrite(ledFan, fanState);
    delay(300); // Debounce delay
  }

  // Ultrasonic Sensor for Automatic Light Control
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Distance in cm

  // Turn ON light if distance is less than 50 cm
  if (distance < 50) {
    digitalWrite(ledLight, HIGH);
  } else if (lightState == LOW) { // Keep OFF if not manually turned ON
    digitalWrite(ledLight, LOW);
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(200); // Short delay for stability
}
