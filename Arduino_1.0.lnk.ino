
float volt=0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
   
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("ADC count=");Serial.print(sensorValue);

 float volt= (float(sensorValue * 5000.0)/1023.0);

  Serial.print("        input voltage=");Serial.print(volt);Serial.println("mV");
  delay(500);        // delay in between reads for stability
}
