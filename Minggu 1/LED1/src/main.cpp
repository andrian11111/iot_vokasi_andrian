#include <Arduino.h>

// Definisi pin untuk lampu lalu lintas
int lampuMerah = 27;
int lampuKuning = 26;
int lampuBiru = 33; // Ubah dari Hijau ke Biru

void setup()
{
    Serial.begin(115200);
    Serial.println("ESP32 Traffic Light");

    pinMode(lampuMerah, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuBiru, OUTPUT); // Pastikan pin ini juga diatur sebagai OUTPUT
}

void loop()
{
    // Nyalakan lampu merah
    digitalWrite(lampuMerah, HIGH);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuBiru, LOW); // Ganti Hijau ke Biru
    Serial.println("Lampu Merah ON");
    delay(1000);

    // Nyalakan lampu kuning
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, HIGH);
    digitalWrite(lampuBiru, LOW); // Ganti Hijau ke Biru
    Serial.println("Lampu Kuning ON");
    delay(1000);

    // Nyalakan lampu biru
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuBiru, HIGH); // Ganti Hijau ke Biru
    Serial.println("Lampu Biru ON");
    delay(1000);
}
