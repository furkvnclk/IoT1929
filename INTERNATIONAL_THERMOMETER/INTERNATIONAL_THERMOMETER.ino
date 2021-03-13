#include "DHT.h"

#define DHTPIN 2  // Digital pin connected to the DHT sensor

#define DHTTYPE DHT11  // Define DHT type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 test!"));

  dht.begin();
}

void loop() {
  float humidty = dht.readHumidity();
  float temperature = dht.readTemperature();  // Default is Celcius
  float tFahrenheit = dht.readTemperature(true);  // (isFahrenheit = true)
  float tKelvin = temperature + 273.15;

  if (isnan(humidty) || isnan(temperature) || isnan(tFahrenheit)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.println("Temperatures");
  Serial.println("Celsius: " + String(temperature));
  Serial.println("Fahrenheit: " + String(tFahrenheit));
  Serial.println("Kelvin: " + String(tKelvin));
  Serial.println("Humidity: " + String(humidty));
  delay(2000);
}
