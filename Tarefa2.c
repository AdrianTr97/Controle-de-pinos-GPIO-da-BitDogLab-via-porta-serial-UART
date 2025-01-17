#include <stdio.h>
#include "pico/stdlib.h"

// Definições dos LEDs RGB
#define LED_RED 13
#define LED_BLUE 12
#define LED_GREEN 11

// Definição do buzzer
#define BUZZER 21


int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
