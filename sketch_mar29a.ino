int IRSensor = 3; // connect ir sensor to arduino pin 3
int LED = 11; // conect Led to arduino pin 11

void setup() 
{
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
  Serial.begin (9600); //// Starts the serial communication
}

void loop()
{
  //Define a variables for read the IRsensor   
  int Sensordata = digitalRead (IRSensor); 
  
  // Prints the output data on the Serial Monitor 
  Serial.print("Sensor value:");
  Serial.println(Sensordata);
  
  if (Sensordata == 0)  //Check the sensor output
  {
    digitalWrite(LED, LOW); // LED High
    }
  
  else 
  {
    digitalWrite(LED, HIGH); // LED LOW
  }
  
}
