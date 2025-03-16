# Practica-1---PD
## **Pràctica 1 : BLINK**

**Objetivo:**
El objetivo de la practica es producir el parpadeo periodico de un led. Se utilizara la salida serie para depurar el programa.

**Materiales:**
ESP32-S1
LED (rojo)

# **Código básico**
Codigo main.cpp:
Descripcion:

# **Modificar el programa para que incluya el envio de datos (ON y OFF) al puerto serie.**
Codigo main.cpp:
Descripcion:


# **Modificar el programa para que actue directamente sobre los registros de los puertos de entrada y salida**
Codigo main.cpp:
Descripcion:


# **Diagramas:**

Diagrama de flujo
```mermaid
graph TD;
    A[Inicio] -->  B[Setup];
    B[Setup] -->  C{led encendido ON};
    C{led encendido ON} --> |Enciende led| D[Delay 500 ms];
    D[Delay 0,5s] --> |Apaga led| E{led apagado OFF};
    E{led apagado OFF} --> |Delay 500ms| D[Delay 500 ms];
    E{led apagado OFF} --> |Repetir proceso| F[Fin];
```
Diagrama de tiempo:
```mermaid
sequenceDiagram
    participant ESP-32 Board
    participant LED
    participant Delay


    ESP-32 Board->>LED: pinMode(LED_BUILTIN, PUERTO_SALIDA)
    loop
        ESP-32 Board->>LED: digitalWrite(LED_BUILTIN, ENCENDIDO)
        ESP-32 Board->>Delay: delay(DELAY)
        ESP-32 Board->>LED: digitalWrite(LED_BUILTIN, APAGADO)
        ESP-32 Board->>Delay: delay(DELAY)
    end
```

# **Pregunta**
**¿Cual es el tiempo libre que tiene el procesador?**
Podemos saber el tiempo libre programando un delay (#define DELAY X), los microsegundos que seleccionemos será el tiempo libre del procesador.



