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
    config_gpio();

        while (true) {
        int x;
        printf("Escolha uma opcao:\n");
        printf("1. Ligar LED Verde\n");
        printf("2. Ligar LED Azul\n");
        printf("3. Ligar LED Vermelho\n");
        printf("4. Ligar os tres LEDs (branco)\n");
        printf("5. Desligar todos os LEDs\n");
        printf("6. Acionar o buzzer\n");
        printf("Opcao: ");
        scanf("%d", &x);
            switch (x) {
            case 1:
                control_gpio(0, 0, 1, 0); // Liga LED Verde(green)
                break;
            case 2:
                control_gpio(0, 1, 0, 0); // Liga LED Azul(blue)
                break;
            case 3:
                control_gpio(1, 0, 0, 0); // Liga LED Vermelho (red)
                break;
            case 4:
                control_gpio(1, 1, 1, 0); // Liga todos os LEDs (branco)
                break;
            case 5:
                control_gpio(0, 0, 0, 0); // Desliga todos os LEDs
                break;
            case 6:
                control_gpio(0, 0, 0, 1); // Liga o buzzer
                sleep_ms(2000); // Delay de 2 segundos
                control_gpio(0, 0, 0, 0); // Desliga o buzzer
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
            }

        }
}
