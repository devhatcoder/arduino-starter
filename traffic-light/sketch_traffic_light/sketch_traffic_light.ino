// Traffic light sequence - Arduino Uno

int GREEN_PIN = 12;
int YELLOW_PIN = 10;
int RED_PIN = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(YELLOW_PIN, HIGH);
  delay(2000);
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  delay(5000);
  digitalWrite(YELLOW_PIN, HIGH);
  delay(1500);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(5000);
  digitalWrite(GREEN_PIN, LOW);
}
