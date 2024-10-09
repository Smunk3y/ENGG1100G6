#define In1A
#define In1B


void setup() {

  serial.begin(9600);
  pinMode(in1A, OUTPUT);
  pinMode(in1B, OUTPUT);


}

void loop() {

  digitalWrite(in1A, HIGH);
  digitalWrite(in1B, LOW);
  Serial.println("Spinning one direction");

  delay(1500); 

  digitalWrite(in1A, LOW);
  digitalWrite(in1B, LOW);
  Serial.println("Stopped"); 

  delay(1500); 


  digitalWrite(in1A, LOW);
  digitalWrite(in1B, HIGH);
  Serial.println("Spinning the other direction"); 

  delay(1500); 

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  Serial.println("Stopped");

  delay(1500);

}
