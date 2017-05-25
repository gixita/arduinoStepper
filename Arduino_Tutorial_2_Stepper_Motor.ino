/**
 * MakiBot Lab 
 * 
 * Arduino Tutorial #2: Stepper Motor
 * 25-05-2017
 */
int   stepPin   = 13;   // Connect pin 13 to step of Pololu
int   dirPin    = 12;   // Connect pin 12 to direction of Pololu

int   angle     = 180;  // Rotation in degre
float motorStep = 1.8;  // Angle of one step
bool  side      = HIGH; // Rotation side

int   nbSteps   = (int) (angle / motorStep);

void setup() 
{
  // Open serial port
  Serial.begin(9600);

  // Configure arduino pins
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);       
}

void loop() 
{
  Serial.print("Turning ");
  Serial.print(angle);
  if (side == HIGH) Serial.println(" degre CW");
  else Serial.println(" degre CCW");

  // Turn x step in direction 1
  for (int i = 0; i < nbSteps; i++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1100);
    
    digitalWrite(stepPin, LOW);   
    delayMicroseconds(1100);
  }  

  // Invert rotating side
  side = (side == HIGH) ? LOW : HIGH;
  digitalWrite(dirPin, side);

  delay(1000);
}
