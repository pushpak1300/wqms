<h1 align="center">
  Water Quality Monitoring System (Arduino & Blynkk)
</h1>


### Hardware Components 

- Arduino Mega 2560
- ESP Serial 8266
- Ph Sensor Module
- Ds11b20 waterproof tempreture sensor
- 4 Pin Ultrasonic sensor
------------------------------------------
### Software 

- Arduino IDE
- [Blynk Cloud](https://blynk.io/)
- **Blynk Mobile App: 
[<img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/googleplay.svg" width="18" height="18" /> Google Play](https://play.google.com/store/apps/details?id=cc.blynk) | 
[<img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/apple.svg" width="18" height="18" /> App Store](https://itunes.apple.com/us/app/blynk-control-arduino-raspberry/id808760481?ls=1&mt=8)**

------------------------------------------
### Installation

-Install Required Libraries and import libraries in adruino IDE.<br>
  **Blynk [Arduino Library](https://github.com/blynkkk/blynk-library/releases/latest)**<br>
  **One Wire[Arduino Library](https://www.arduinolibraries.info/libraries/one-wire)**<br>
  **Dallas Tempretur[Arduino Library](https://github.com/milesburton/Arduino-Temperature-Control-Library/blob/master/DallasTemperature.h)**<br>
  
-Edit and Add Your Auth token from blynk[here](https://github.com/pushpak1300/wqms/blob/master/src/wqms.ino)

```c
char auth[] = Your Auth Token;
```
-Add your wifi ssid and password[here](https://github.com/pushpak1300/wqms/blob/master/src/wqms.ino)
```c
char ssid[] = "Your ssid here";
char pass[] = "your password leave blank for open network";
```
-Compile and Upload code on Arduino Board.

-Add Vitual pin input from arduino to blynk[documentation](http://help.blynk.cc/en/articles/512056-how-to-display-any-sensor-data-in-blynk-app)

------------------------------------------
## Contributing
We accept contributions for stability bugfixes, new hardware support, or any other improvements. [Here](https://github.com/pushpak1300/wqms/issues)<br>
Feel free to open pull request or issues.

### License
This project is released under The MIT License (MIT).

------------------------------------------
## Documentation and other helpful links

[Full Blynk Documentation](http://docs.blynk.cc/#blynk-firmware) - a complete guide on Blynk features  
[Community (Forum)](http://community.blynk.cc) - join a 500,000 Blynk community to ask questions and share ideas  
[Ph sensor](https://www.electroniclinic.com/ph-sensor-arduino-how-do-ph-sensors-work-application-of-ph-meter-ph-sensor-calibration/) - helpful articles on ph sensor calibration <br>
[Code Examples Browser](http://examples.blynk.cc) - browse examples to explore Blynk possibilities <br>
[Arduino Documenattion](https://www.arduino.cc/en/main/docs) -Arduino Documenattion<br>
