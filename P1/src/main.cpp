// Álvaro Marcos Rodríguez	

// Código básico

/*#include <Arduino.h>
#define LED_BUILTIN 48
#define DELAY 500


 void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  }
  void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DELAY);
  digitalWrite(LED_BUILTIN, LOW);
  delay(DELAY);
  }
*/


// Modificar el programa para que incluya el envio de datos (ON y OFF) al puerto serie.

  /*
#include <Arduino.h>
#define LED_BUILTIN 48
#define DELAY 500


 void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  }
  void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DELAY);
  digitalWrite(LED_BUILTIN, LOW);
  delay(DELAY);
  }
*/


// Modificar el programa para que actue directamente sobre los registros de los puertos de entrada y salida


/* #include <Arduino.h>
#define LED_PIN 48
#define DELAY 1000




void setup() {
    // Configurar el pin como salida directamente en el hardware
    gpio_pad_select_gpio(LED_PIN);
    gpio_set_direction((gpio_num_t)LED_PIN, GPIO_MODE_OUTPUT);




    // Inicializar el puerto serie
    Serial.begin(115200);
}




void loop() {
    uint32_t *gpio_out = (uint32_t *)GPIO_OUT_REG; // Puntero al registro GPIO




    *gpio_out |= (1 << LED_PIN);  // Encender LED
    Serial.println("ON");         // Mensaje serie
    delay(DELAY);




    *gpio_out &= ~(1 << LED_PIN); // Apagar LED
    Serial.println("OFF");        // Mensaje serie
    delay(DELAY);
}*/