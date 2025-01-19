#include <stdio.h>
#include "pico/stdlib.h"

// Definições dos GPIOs dos LEDs RGB
#define led_pin_green 11
#define led_pin_blue 12
#define led_pin_red 13

// Definição do GPIO do buzzer
#define buzzer 10

void config_gpio() {
    // Incializando e configurando GPIOs como saidas
    gpio_init(led_pin_green); gpio_set_dir(led_pin_green, GPIO_OUT);
    gpio_init(led_pin_blue); gpio_set_dir(led_pin_blue, GPIO_OUT);
    gpio_init(led_pin_red); gpio_set_dir(led_pin_red, GPIO_OUT);
    gpio_init(buzzer); gpio_set_dir(buzzer, GPIO_OUT);
}
// Função para acionar os pinos
void control_gpio(uint8_t red, uint8_t blue, uint8_t green, uint8_t buz) {
    gpio_put(led_pin_red, red);
    gpio_put(led_pin_blue, blue);
    gpio_put(led_pin_green, green);
    gpio_put(buzzer, buz);
}

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
