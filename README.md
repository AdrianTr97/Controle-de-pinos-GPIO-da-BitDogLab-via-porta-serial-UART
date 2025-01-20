# Controle de GPIOs com LEDs RGB e Buzzer usando Raspberry Pi Pico W

📋 **Sobre**

Este projeto utiliza uma placa **Raspberry Pi Pico W** para controlar LEDs RGB (verde, azul e vermelho) e um buzzer. A interação é feita por meio de um menu exibido no terminal serial (via USB). Os LEDs podem ser acesos individualmente ou todos juntos, enquanto o buzzer pode ser acionado para emitir som por 2 segundos.

---

🚀 **Funcionalidades**

1. **Controle de LEDs RGB:**
   - Liga/desliga LEDs individuais (verde, azul e vermelho).
   - Liga todos os LEDs ao mesmo tempo (branco).
   - Desliga todos os LEDs.

2. **Controle do Buzzer:**
   - Emite som por 2 segundos.

3. **Menu Interativo no Terminal:**
   - Permite selecionar as opções de controle dos LEDs e do buzzer.

---

🛠️ **Instruções de Uso**

![WhatsApp Image 2025-01-19 at 22 49 39](https://github.com/user-attachments/assets/cef0cb82-5716-4cef-8f67-2bc2a6b50fa5)


Figura: Simulador Wokwi

### **1. Conexões de Hardware**

| Componente   | GPIO           |
|--------------|----------------|
| LED Verde    | GPIO 11        |
| LED Azul     | GPIO 12        |
| LED Vermelho | GPIO 13        |
| Buzzer       | GPIO 21        |
| GND          |Todos os componentes |

🎹 Mapeamento do Teclado Matricial
- **Tecla 1:** Liga o LED verde.
- **Tecla 2:** Liga o LED azul.
- **Tecla 3:** Liga o LED vermelho.
- **Tecla 4:** Liga todos os LEDs (branco).
- **Tecla 5:** Desliga todos os LEDs.
- **Tecla 6:** Aciona o buzzer por 2 segundos.

🏆 **Resultados Obtidos**

O código foi testado com sucesso e permite controlar LEDs RGB e um buzzer por meio de um menu interativo no terminal serial. Este projeto é ideal para demonstração de controle de GPIOs com microcontroladores.

Solução trabalhada e resultados obtidos no experimento:

Vídeo ensaio (duração máxima de 3 minutos)

https://drive.google.com/file/d/1b-cUAMXdPRXZDPXY0MJtaE8vnSxkr-qz/view?usp=drivesdk

---

👨‍💻 **Contribuidores**

°Adrian Trajano

°Eduardo Lino

°Emmanuel Souza

°Gabriel Marcone

°Kauan Teixeira

°Matheus Amorim

°Vitória Tanan
