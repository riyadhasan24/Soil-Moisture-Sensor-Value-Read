/* The source Code from : https://github.com/riyadhasan24
 * By Md. Riyad Hasan
 */
int Soil_Moisture;
int Sensor_Pin = A2;  // For "analogRead" function, no need to initialise "pinMode" in "void setup()"
int Moisture;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Soil_Moisture = analogRead(Sensor_Pin);
  Moisture = map(Soil_Moisture, 0, 1023, 100, 0);
  Serial.print("The value is = " );
  Serial.print(Moisture);
  Serial.println("%");
  delay(500);
}
