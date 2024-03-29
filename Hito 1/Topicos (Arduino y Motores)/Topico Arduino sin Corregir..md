# Apartado 3: Estudio del Arduino Mega 2560

## ¿Cuáles son las principales características del microprocesador de este Arduino?
Lleva un Atmel Atmega2560-16AU basado en la arquitectura RISC; en un solo ciclo puede lograr un rendimiento de 1 MIPS por MHz, optimizando así tanto el consumo de energía como la velocidad de procesamiento. 
Memoria flash de 256 kB,memoria SRAM de 8 kB, memoria EEPROM de 4 kB y frecuencia máxima de la CPU de 16 MHz.
[Bibliografía: https://proyectoarduino.com/arduino-mega-2560/; https://www.youtube.com/watch?v=fuadYyhKU7A]

## ¿Qué tipos de salidas y entradas tiene el Arduino?
Tenemos un total de 70 E/S, de las cuales 54 son digitales y 16 son analógicas. Cada pin funciona a 5 V y envía y recibe 20 mA (aunque su carga máxima es de hasta 40 mA). 
Algunas funciones especiales de los pines serían: Serial,interrupciones externas, PWM, SPI, LED, TWI.
[Bibliografía:https://proyectoarduino.com/arduino-mega-2560/]

## ¿Qué son los pines de interrupción y para qué sirven?
Los pines se pueden configurar para activar una interrupción en nivel bajo, flanco ascendente o descendente, o incluso un cambio de nivel. 
Los pines de interrupción son: el 2 (interrupción 0), 3 (interrupción 1), 18 (interrupción 5),19 (interrupción 4), 20 (interrupción 3) y 21 (interrupción 2).
[Bibliografía:https://proyectoarduino.com/arduino-mega-2560/; https://programarfacil.com/blog/arduino-blog/interrupciones-con-arduino-ejemplo-practico/]

## ¿Qué es el PWM?
Son entradas de modulación de ancho de pulsos. Básicamente, generan señales analógicas usando una fuente digital. Consta de dos componentes principales: un ciclo de trabajo (señal en estado alto) y una frecuencia 
(que determina la velocidad entre el estado alto y bajo). Se usa en motores y cualquier parte mecánica. Los pines van desde el 2 al 13 y del 44 al 46.
[Bibliografía: https://programarfacil.com/blog/arduino-blog/comunicacion-i2c-con-arduino/; https://proyectoarduino.com/pwm-arduino/]

## ¿Qué son las UARTs?
UART significa recepción-transmisión asíncrona universal. Son protocolos serie. En el Arduino, tenemos puertos en línea, cada uno de los cuales tiene dos líneas, 
TX y RX, que se cruzan para comunicar dos dispositivos. La UART es un dispositivo de hardware que se encarga de enviar los datos de una línea a la otra. Usa una línea de datos simple para transmitir y otra para recibir datos.
Comúnmente, se transmiten 8 bits de datos de la siguiente forma:
un bit de inicio (a nivel bajo), 8 bits de datos y un bit de parada (a nivel alto). Los pines utilizados son: 0 (RX) y 1 (TX) (del puerto serial 0), 19 (RX) y 18 (TX) (del puerto serial 1),
17 (RX) y 16 (TX) (del puerto serial 2), y 15 (RX) y 14 (TX) (del puerto serial 3).
[Bibliografía:https://programarfacil.com/blog/arduino-blog/comunicacion-i2c-con-arduino/;https://arduino.cl/como-configurar-la-comunicacion-uart-en-arduino/; https://www.rinconingenieril.es/funciona-puerto-serie-la-uart/]

## ¿Qué son las I2C?
El protocolo I2C utiliza solo dos pines y se pueden conectar múltiples sensores y/o actuadores. 
Tiene un protocolo de actuación serial que sirve para comunicar varios chips al mismo tiempo, también se conoce como TWI. 
Es un protocolo síncrono. I2C usa solo 2 cables, uno para el reloj (SCL) y otro para el dato (SDA). Esto significa que el maestro y el esclavo envían datos por el mismo cable, 
el cual es controlado por el maestro, que crea la señal de reloj.
I2C no utiliza selección de esclavo, sino direccionamiento. El protocolo I2C funciona con una arquitectura maestro-esclavo, donde los maestros inician y coordinan la comunicación, 
y los esclavos esperan a que los maestros se comuniquen con ellos.
Los pines utilizados son el 20 y el 21.
[Bibliografía:https://programarfacil.com/blog/arduino-blog/comunicacion-i2c-con-arduino/; https://aprendiendoarduino.wordpress.com/2016/11/14/bus-i2ctwi/]

## ¿Qué es el SPI?
El SPI es otro protocolo serie muy simple. Un maestro envía la señal de reloj, y tras cada pulso de reloj envía un bit al esclavo y recibe un bit de este. Los nombres para las señales son SCK (reloj),
MOSI (maestro out esclavo in) y MISO (maestro in esclavo out).
[Bibliografía:https://programarfacil.com/blog/arduino-blog/comunicacion-i2c-con-arduino/; https://www.luisllamas.es/arduino-spi/]

## ¿Cuáles son las características de las entradas analógicas y qué pines tiene el Arduino?
En cuanto a las entradas analógicas, cada una proporciona una entrada de 10 bits y mide un voltaje desde tierra hasta 5 V. En la placa, tenemos AREF (un voltaje de referencia para las placas) 
y un Reset (pin de entrada que reinicia el procesador).
[Bibliografía:https://proyectoarduino.com/arduino-mega-2560/]

## ¿Qué alimentación tiene el Arduino?
Se puede alimentar a través de un USB o mediante una batería externa. Este Arduino puede funcionar con un suministro externo de energía de 6 a 20 V, pero el rango óptimo de voltaje está entre 7 y 12 V.
[Bibliografía:https://proyectoarduino.com/arduino-mega-2560/]

## ¿En qué pines conectamos nuestros componentes?
Para sensores analógicos utilizaremos los pines 54 al 69, para sensores digitales y en general, entradas digitales de 0 al 53. Para conectar motores u otros dispositivos similares, tenemos los pines del 2 al 13 y del 44 al 46. 
Las luces RGB se pueden conectar a los pines PWM del 2 al 13 y del 44 al 46. Finalmente, para conectar el Driver de potencia L298N, lo conectamos a los pines de control del motor del Arduino, que serán los pines digitales.
[Bibliografía:]
