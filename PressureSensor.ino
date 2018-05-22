int pressure;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
}

void loop() {
  delay(250);
  float pressure = analogRead(A0);
  float flow = 0.0011* (pressure*pressure*pressure) - 0.3586* (pressure*pressure) + 40.708 * pressure - 1525;
  Serial.print("Analog Flow:");
  Serial.println(flow);

}

