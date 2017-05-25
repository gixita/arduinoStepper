/**
 * MakiBot Lab 
 * 
 * Arduino Tutorial #1: Continuous Motor
 * 25-05-2017
 */
int motorPin = 3;

void setup() 
{
  // Open serial port
  Serial.begin(9600);

  pinMode(motorPin, OUTPUT);
}

void loop()
{
  Serial.println("Moteur On");
  
  digitalWrite(motorPin, HIGH); // le moteur se lance
  delay(2000);
  
  Serial.println("Moteur Off");

  digitalWrite(motorPin, LOW); // le moteur s'arrête
  delay(2000);
}
