// Prints "Hello World" and flashes the LED on when receives an input
// Initialize variables
int val;
int ledpin = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = Serial.read();  // reads input from serial monitor
  if(val == 'R'){
    digitalWrite(ledpin, HIGH); // turn LED on
    delay(500);
    digitalWrite(ledpin, LOW);  // turn LED off
    delay(500);
    Serial.println("Hello World!"); // prints
  }
}
