#include <DHT_U.h>
#include <DHT.h>

int SENSOR=2;
int TEMPERATURA;
int HUMEDAD;
DHT dht(SENSOR, DHT11); //Definimos por donde entrarán los datos
//y el modelo del sensor
void setup() {
Serial.begin(9600); //Usamos el monitor serie para visualizar
//las lecturas de temp. y humedad
dht.begin(); //Inicializamos el sensor
}
void loop() {
TEMPERATURA=dht.readTemperature();
HUMEDAD=dht.readHumidity();
Serial.print("Temperatura: ");
Serial.print(TEMPERATURA);
Serial.print(" Humedad: ");
Serial.println(HUMEDAD);
delay(500);
}
