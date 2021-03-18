int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
void Thermistor(int16_t ADCvalue)
{
  double T, Temp;
  double T0=301.15;
  double lnR;
  int16_t R;
  int16_t R0=8805;
  int16_t B=3950;
  int16_t Pullup=9930;

  T=1/(1/T0+(log(R)-log(R0))/B);
  Temp=T-273.15;

  printf("ADC:%4d, R=%d, TEmp.=%f\n", ADCvalue, R, Temp);
}

void setup() {
  Serial.begin(115200);
}


void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  
  
}
