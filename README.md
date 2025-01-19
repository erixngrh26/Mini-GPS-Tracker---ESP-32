ESP32 GPS Mini Tracker
Deskripsi Proyek
Proyek ini adalah GPS Mini Tracker berbasis ESP32 yang dirancang untuk membaca data lokasi seperti latitude, longitude, dan kecepatan dari modul GPS (contoh: NEO-6M). Data lokasi ditampilkan pada Serial Monitor Arduino IDE dan dapat dikembangkan lebih lanjut untuk menyimpan atau mengirimkan data ke server.

Proyek ini sangat cocok untuk aplikasi pelacakan kendaraan, monitoring lokasi personal, atau sebagai pembelajaran tentang integrasi GPS dengan microcontroller.

Fitur Utama
Membaca data GPS (latitude, longitude, kecepatan) menggunakan modul GPS.
Menampilkan data pada Serial Monitor.
(Opsional) Mengirim data lokasi ke server menggunakan Wi-Fi atau GSM.
(Opsional) Menyimpan data lokasi ke kartu SD.
Komponen yang Dibutuhkan
ESP32
Modul GPS (contoh: NEO-6M)
Breadboard dan kabel jumper
Power Supply 5V
(Opsional) Modul GSM/Wi-Fi untuk komunikasi
(Opsional) Modul MicroSD untuk penyimpanan lokal
Langkah Instalasi
Clone Repository

bash
Copy
Edit
git clone https://github.com/username/esp32-gps-mini-tracker.git
cd esp32-gps-mini-tracker
Persiapan Perangkat

Hubungkan modul GPS ke ESP32:
RX GPS -> Pin 16 ESP32
TX GPS -> Pin 17 ESP32
Pastikan perangkat mendapatkan daya yang cukup.
Upload Kode ke ESP32

Buka file kode di Arduino IDE.
Instal library yang dibutuhkan:
TinyGPS++
Pilih board ESP32 dan port yang sesuai.
Upload kode ke ESP32.
Uji Coba

Buka Serial Monitor pada baud rate 115200.
Pastikan modul GPS mendapatkan sinyal satelit (dapat memakan waktu beberapa detik hingga menit).
