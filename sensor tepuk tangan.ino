##include <Arduino.h>
const in sensorPin = A0;// Pin analog untuk membaca sensor suara
const in ledPin = 2; // pin digital untuk mengontrol LED
const int thereshold = 500;// Nilai ambang batas untuk deteksi suara
void setup()
pinMode(ledPin,OUTPUT);
}
void loop(){
  int sensorValue = analogRead(sensorPin);
  if(sensorValue> Thershold) {
    digitalWrite(ledPin, HIGH);//Nyalakan LED
    delay(500);            // Tunggu 0,5 detik
  }else{
    digitalWrite(ledPin, LOW); // Matikan LED
  }
  
  }