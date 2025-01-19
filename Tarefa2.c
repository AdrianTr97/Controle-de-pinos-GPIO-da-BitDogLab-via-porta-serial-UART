#include <stdio.h>
#include "pico/stdlib.h"

// Definições dos GPIOs dos LEDs RGB
#define led_pin_green 11
#define led_pin_blue 12
#define led_pin_red 13

// Definição do GPIO do buzzer
#define buzzer 10


int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
