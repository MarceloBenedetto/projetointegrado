# 🌡️ Projeto: Sensor de Umidade e Temperatura com Arduino / Pode-se utilizar para controlar temperatura e umidade de uma estufa

Este projeto lê dados de **temperatura e umidade** usando sensores analógicos conectados a um **Arduino Uno** ele exibe as informações em um **display LCD 16x2**, além disto ele também aciona LEDS de alerta para faixas específicas de temperatura, pode-se utilizar o potenciômetro para regular a umidade.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 🧰 Componentes Utilizados

- 1x Arduino Uno
- 1x Display LCD 16x2 (com interface paralela)
- 1x Sensor de Temperatura (ex: LM35)
- 1x Sensor de Umidade analógico
- 2x LEDs (verde e vermelho)
- 1x Protoboard + jumpers
- 1x Potenciômetro

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 🔧 Funcionamento

- O sensor de temperatura fornece uma tensão proporcional à temperatura ambiente.
- A tensão é convertida em °C e exibida no display.
- O sensor de umidade lê o nível do ambiente e mostra o valor em %.
- Se a temperatura for **abaixo de 15 °C**, acende o **LED vermelho**.
- Se for **acima de 25 °C**, acende o **LED verde**.
- Com o acréscimo do potenciômetro, pode-se controlar a umidade do local.

- OBS: Caso preferir, pode-se alterar os valores das temperaturas para acionamento de cada LED, deixei cada linha comentada para facilitar no entendimento do código.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 💻 Código

O código está no arquivo sensor_de_umidade_e_temperatura.ino.  
Organizado em blocos da seguinte forma:
- Inclusão de bibliotecas necessárias
- Direcionamento dos pinos utilizados
- Inicialização de variáveis e display
- Leitura dos sensores
- Cálculo das grandezas
- Atualização do LCD - Temperatura / Umidade
- Acionamento dos LEDs de alerta

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 🚀 Como Executar

1. Conecte os componentes conforme o esquema do Tinkercad.
2. Carregue o código .ino na sua IDE Arduino.
3. Faça upload para a placa Arduino.
4. Observe os dados no LCD e os LEDs sendo acionados conforme a temperatura.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 📌 Histórico de Versões

| Versão | Data       | Mudanças principais                                            |
|--------|------------|----------------------------------------------------------------|
| 1.0    | 2023-06-04 | Primeira versão funcional                                      |
| 1.1    | 2025-06-19 | Melhorias na lógica de alertas                                 |
| 1.2    | 2025-06-20 | Comentários nas linhas e possível inclusão de botão            |

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 🧑‍💻 Autor

Marcelo Benedetto

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 📷 Imagens

Abaixo imagem do meu projeto no Tinkercad.

![Image](https://github.com/user-attachments/assets/0a3958da-0ec1-4313-a913-7cba27383bac)


## Link projeto tinkercad

Aqui tem o link do projeto afim da realização de testes.

<https://www.tinkercad.com/things/9n8Md5cVXmk-sensor-de-umidade-e-temperatura?sharecode=eC2_ypXInHbc_Nudv_gMrmj73MbiQV74NYA2Exbd6H4>
