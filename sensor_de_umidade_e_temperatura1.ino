// C++ code
//
// Biblioteca LiquidCrystal para o Display
#include <LiquidCrystal.h>

// Pinos conectados no display
LiquidCrystal LCD(9,11,6,5,4,3);

// Variáveis

int LED=2;
//int BT=7;
int SensorTempPino=0;
int SensorUmidPino=1;
int porcem=0;


// Pino usado para o alerta de Temp Baixa = 13 
int AlertaTempBaixa=13;
// Pino usado para o alerta de Temp Alta = 12 
int AlertaTempAlta=12;

// Liga Led Vermelho abaixo de 15 grau Celsius
int TempBaixa=15;
// Liga Led Verde acima de 25 graus Celsius
int TempAlta=25;


void setup() 
{
     
  // Informa se os pinos dos LEDs são de entrada ou saída
  pinMode(AlertaTempBaixa, OUTPUT);  
  pinMode(AlertaTempAlta, OUTPUT);
	
  // LCD em 16 colunas x 2 linhas
  LCD.begin(16,2);
  
  //Cursor na coluna 0 e linha 0;
  LCD.setCursor(0,0);
  
  // Mensagem no LCD
  LCD.print("Temp:");
  
    // Mensagem no LCD (Espaço vazio para não ficar "colada" a informação
  LCD.print("    ");
  
  // Mensagem no LCD
  LCD.print("Umid:");
  
  // Cursor para a primeira coluna e segunda linha do LCD
  LCD.setCursor(0,1);
  
  // Imprime a mensagem no LCD ( C = Graus Celsius)
  LCD.print("     C      ");
  
  // Imprime a mensagem no LCD (% = porcentagem da Umidade)
  LCD.setCursor(13,1);
  LCD.print("%");
}

void loop()
{

  // Melhorias
 // Trecho ainda em desenvolvimento para controle manual via botão ou led de alerta.
	
	
 /* atual_BT= armazena(ultimo_BT);
  if (ultimo_BT==LOW && atual_BT==HIGH)
  {
     ledON= !ledON;
     delay(1000);
  
  }
  
  ultimo_BT=atual_BT;
  digitalWrite (LED, ledON);*/

   // Leitura da tensao no Sensor de Temperatura
   int SensorTempTensao=analogRead(SensorTempPino);

   // Formula para converter a tensao lida
   float Tensao=SensorTempTensao*5;
   Tensao/=1024;

   // Formula para converter a tensao lida em Graus Celsius
   // ou para testes alterar o valor *100 assim você tem uma temp > ou < 
   float TemperaturaC=(Tensao-0.5)*100;
   //float TemperaturaC=(Tensao-0.6)*100; nessa linha para teste força temperatura a mudar além do ambiente aciona o led

   // Muda o cursor para a primeira coluna e segunda linha do LCD
   LCD.setCursor(0,1);

   // Mensagem da temperatura em Graus Celsius
   LCD.print(TemperaturaC);
  
  
    
    // Leitura da tensao no Sensor de Umidade 
   int SensorUmidTensao=analogRead(SensorUmidPino);
        
    // Formula para converter a tensao lida em porcentagem
   float porcem=map(SensorUmidTensao,0,1023,0,100);
    
    // Muda o cursor para a segunda coluna e nona linha do LCD
    LCD.setCursor(8,1);
     
    // Mensagem d umidade em porcentagem
    LCD.print(porcem);
     
  
  // Acende ou apaga os alertas luminosos de temperatura baixa e alta
  	if (TemperaturaC>=TempAlta) {
  		digitalWrite(AlertaTempBaixa, LOW);
  		digitalWrite(AlertaTempAlta, HIGH);
    }
  	else if (TemperaturaC<=TempBaixa) {
  		digitalWrite(AlertaTempBaixa, HIGH);
  		digitalWrite(AlertaTempAlta, LOW);
  	}
  	else {
  		digitalWrite(AlertaTempBaixa, LOW);
  		digitalWrite(AlertaTempAlta, LOW);
    }

  // Aguarda 1 segundo
  	delay(1000);
}  
  
   
   
 
   
