/*
Semáforo, com 3 leds
Autor: Keven Bomfim - Nº: 26
Data: 13/04/2020
*/ 
/*
Suponhamos que: o LED Vermelho esteja no prino 13
                o LED Amarelo esteja no pino 12
                e o LED Verde no pino 11
*/
#define Vermelho 13
#define Amarelo 12
#define Verde 11

void setup() {
  // put your setup code here, to run once:
  pinMode (Vermelho, OUTPUT);
  pinMode (Amarelo, OUTPUT);
  pinMode (Verde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Vermelho,1); //liga LED Vermelho
  delay (5000); //espera 5 segundos
  digitalWrite(Vermelho, 0); //desliga LED vermelho
  digitalWrite (Verde,1); //liga LED verde

  delay (2500); //espera 2,5 segundos
  digitalWrite(Verde, 0); //desliga LED verde
  digitalWrite (Amarelo,1); //liga LED amarelo

  delay (1000);
  digitalWrite (Amarelo, 0); //desliga led amarelo
  
}
