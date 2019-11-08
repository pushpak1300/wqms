#define BLYNK_PRINT Serial
#include ESP8266_Lib.h
#include BlynkSimpleShieldEsp8266.h
#include OneWire.h
#include DallasTemperature.h
defining input wires
#define ONE_WIRE_BUS 8
#define trigpin 9 
#define echopin 10 
#define SensorPin 0           the pH meter Analog output is connected with the Arduino’s Analog
unsigned long int avgValue;  Store the average value of the sensor feedback
float b;

int buf[10],temp;
 You should get Auth Token in the Blynk App.
 Go to the Project Settings (nut icon).
char auth[] = Your Auth Token;

 Your WiFi credentials.
 Set password to  for open networks.
char ssid[] = Your ssid here;
char pass[] = your password leave blank for open network;

 Hardware Serial on Mega, Leonardo, Micro... 
#define EspSerial Serial1

 Your ESP8266 baud rate
#define ESP8266_BAUD 115200
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
float Celsius = 0;
float Fahrenheit = 0;
ESP8266 wifi(&EspSerial);
void setup()
{
 Debug console
Serial.begin(9600);
pinMode(13,OUTPUT); 
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
EspSerial.begin(ESP8266_BAUD);
delay(10);
Blynk.begin(auth, wifi, ssid, pass);
 You can also specify server
Blynk.begin(auth, wifi, ssid, pass, blynk-cloud.com, 80);
Blynk.begin(auth, wifi, ssid, pass, IPAddress(192,168,1,100), 8080)
sensors.begin();
}

void loop()
{
Blynk.run();
int duration, distance;
digitalWrite(trigpin, HIGH);
delayMicroseconds(1000);  
digitalWrite(trigpin, LOW);
duration = pulseIn(echopin,HIGH);
distance = ( duration  2)  29.1;
Serial.println(cm); 
Serial.println(distance);
sensors.requestTemperatures();
Celsius = sensors.getTempCByIndex(0);

  for(int i=0;i10;i++)       Get 10 sample value from the sensor for smooth the value
  { 
    buf[i]=analogRead(SensorPin);
    delay(10);
  }
  for(int i=0;i9;i++)        sort the analog from small to large
  {
    for(int j=i+1;j10;j++)
    {
      if(buf[i]buf[j])
      {
        temp=buf[i];
        buf[i]=buf[j];
        buf[j]=temp;
      }
    }
  }
  avgValue=0;
  for(int i=2;i8;i++)                      take the average value of 6 center sample
    avgValue+=buf[i];
  float phValue=(float)avgValue5.010246; convert the analog into millivolt
  phValue=3.5phValue;  
sensorData = analogRead(A0); reading the sensor on A0
Blynk.virtualWrite(V5, Celsius); sending to Blynk
Blynk.virtualWrite(V6, distance); sending to blynk
Blynk.virtualWrite(V7, ph); sending to blynk
}
