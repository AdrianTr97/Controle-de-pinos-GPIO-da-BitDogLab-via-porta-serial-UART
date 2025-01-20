#include <stdio.h>
#include "pico/stdlib.h"

// Definições dos GPIOs dos LEDs RGB
#define led_pin_green 11
#define led_pin_blue 12
#define led_pin_red 13

// Definição do GPIO do buzzer
#define buzzer 21

void config_gpio() { // Incializando e configurando GPIOs como saidas
    gpio_init(led_pin_green); gpio_set_dir(led_pin_green, GPIO_OUT);
    gpio_init(led_pin_blue); gpio_set_dir(led_pin_blue, GPIO_OUT);
    gpio_init(led_pin_red); gpio_set_dir(led_pin_red, GPIO_OUT);
    gpio_init(buzzer); gpio_set_dir(buzzer, GPIO_OUT);
}

void control_gpio(uint8_t red, uint8_t blue, uint8_t green, uint8_t buz) { // Função para acionar os pinos
    gpio_put(led_pin_red, red);
    gpio_put(led_pin_blue, blue);
    gpio_put(led_pin_green, green);
    gpio_put(buzzer, buz);
}

void print_status(const char *status) {
    printf("ON: %s\n", status);
}

int main() {
    stdio_init_all();
    config_gpio();

    while (true) {
        int x;

        int ch = getchar_timeout_us(1000000); // Timeout de 1 segundo
        if (ch != PICO_ERROR_TIMEOUT) {
            x = ch - '0'; // Converte caractere para número
        } else {
            continue; // Valor inválido se não houver entrada
        }

        switch (x) {
            case 1:
                control_gpio(0, 0, 1, 0); // Liga LED Verde
                print_status("GREEN");
                break;
            case 2:
                control_gpio(0, 1, 0, 0); // Liga LED Azul
                print_status("BLUE");
                break;
            case 3:
                control_gpio(1, 0, 0, 0); // Liga LED Vermelho
                print_status("RED");
                break;
            case 4:
                control_gpio(1, 1, 1, 0); // Liga todos os LEDs (branco)
                print_status("WHITE");
                break;
            case 5:
                control_gpio(0, 0, 0, 0); // Desliga todos os LEDs
                printf("ALL LEDs OFF\n");
                break;
            case 6:
                control_gpio(0, 0, 0, 1); // Liga o buzzer
                print_status("BUZZER");
                sleep_ms(2000); // Delay de 2 segundos
                control_gpio(0, 0, 0, 0); // Desliga o buzzer
                printf("OFF: BUZZER\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }

        sleep_ms(200); // delay para evitar leituras repetidas
    }

    return 0;
}