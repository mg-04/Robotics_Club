// an LED controlled by the analog input from a potentiometer
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  // Analog ports are set as input by default
}

void loop() {
  // put your main code here, to run repeatedly:
  // Reads the analog input from the potentiometer
  val = analogRead(0);  // range is about 0-1024
  Serial.println(val);  // for debugging

  // Outputs to the LED
  analogWrite(10, val/4); // analog output limit is 255
  delay(10);
}
