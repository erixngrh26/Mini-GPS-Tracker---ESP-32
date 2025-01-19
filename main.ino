#include <TinyGPS++.h>
#include <HardwareSerial.h>

// Inisialisasi TinyGPS++
TinyGPSPlus gps;

// Inisialisasi Serial untuk GPS
HardwareSerial SerialGPS(1); 

void setup() {
  Serial.begin(115200);  // Serial untuk monitor
  SerialGPS.begin(9600, SERIAL_8N1, 16, 17);  // RX = 16, TX = 17
  
  Serial.println("GPS Mini Tracker Started!");
}

void loop() {
  while (SerialGPS.available() > 0) {
    if (gps.encode(SerialGPS.read())) {  // Proses data GPS
      if (gps.location.isUpdated()) {   // Jika data lokasi baru tersedia
        Serial.print("Latitude: ");
        Serial.println(gps.location.lat(), 6);
        Serial.print("Longitude: ");
        Serial.println(gps.location.lng(), 6);
        Serial.print("Speed: ");
        Serial.println(gps.speed.kmph());
        Serial.println("---------------------");
      }
    }
  }
}
