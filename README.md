# 🌡️ Projeto: Sensor de Umidade e Temperatura com Arduino

Este projeto lê dados de **temperatura e umidade** usando sensores analógicos conectados a um **Arduino Uno** e exibe as informações em um **display LCD 16x2**, além de acionar LEDs de alerta para faixas específicas de temperatura.

---

## 🧰 Componentes Utilizados

- 1x Arduino Uno
- 1x Display LCD 16x2 (com interface paralela)
- 1x Sensor de Temperatura (ex: LM35)
- 1x Sensor de Umidade analógico
- 2x LEDs (verde e vermelho)
- 1x Protoboard + jumpers

---

## 🔧 Funcionamento

- O sensor de temperatura fornece uma tensão proporcional à temperatura ambiente.
- A tensão é convertida em °C e exibida no display.
- Um sensor de umidade lê o nível do solo/ambiente e mostra o valor em %.
- Se a temperatura for **abaixo de 15 °C**, acende o **LED vermelho**.
- Se for **acima de 25 °C**, acende o **LED verde**.

- OBS: Caso preferir, pode-se alterar os valores das temperaturas para acionamento de cada LED, deixei cada linha comentada para facilitar no entendimento do código.

---

## 💻 Código

O código está no arquivo sensor_de_umidade_e_temperatura.ino.  
Organizado em blocos da seguinte forma:
- Inicialização de variáveis e display
- Leitura dos sensores
- Cálculo das grandezas
- Atualização do LCD
- Acionamento dos LEDs de alerta

---

## 🚀 Como Executar

1. Conecte os componentes conforme o esquema do Tinkercad.
2. Carregue o código `.ino` na sua IDE Arduino.
3. Faça upload para a placa Arduino.
4. Observe os dados no LCD e os LEDs sendo acionados conforme a temperatura.

---

## 📌 Histórico de Versões

| Versão | Data       | Mudanças principais               |
|--------|------------|-----------------------------------|
| 1.0    | 2025-06-20 | Primeira versão funcional         |
| 1.1    | (opcional) | Melhorias na lógica de alertas   |

---

## 🧑‍💻 Autor

Marcelo Benedetto

---

## 📷 Imagens (opcional)

Adicione aqui fotos reais do projeto ou esquemas do Tinkercad.
