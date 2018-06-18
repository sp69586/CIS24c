void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temperature = analogRead(TemperaturePin);
  temperature = map(temperature, 0, 1024, 0, 255);
  temperature = temperature*0.38823529411;
  Serial.print("temperature");
  Serial.print();
  Serial.print('\n');
}
