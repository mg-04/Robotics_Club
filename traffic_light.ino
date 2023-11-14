int redled = 4;
int yellowled = 3;
int greenled = 2;
int gTime = 10;
int rTime = 15;
void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenled, HIGH);
  delay(gTime * 1000-750);
  digitalWrite(greenled, LOW);

  for(int i = 0; i < 3; i++){
    digitalWrite(greenled, HIGH);
    delay(250);
    digitalWrite(greenled, LOW);
    delay(250);
  }
  digitalWrite(yellowled, HIGH);
  delay(3000);
  digitalWrite(yellowled, LOW);
  digitalWrite(redled, HIGH);
  delay(rTime * 1000);
  digitalWrite(redled, LOW);

}
