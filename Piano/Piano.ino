//Definição das constantes:pinos de entrada
#define pinoBuzzer 2

//leds / botões
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo1 10 
byte doh, re, mi ,fa ,so ,la ,si ,do1 =0;
void setup() {
 pinMode(pinoBuzzer, OUTPUT);
 
  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDo1, INPUT);

Serial.begin(9600);
delay(1000);
}

void loop() {
  /*Leitura dos botões armazenada nas variáveis de controe*/
  
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  mi=digitalRead(pinoMi) ;
  fa =digitalRead(pinoFa);
  so =digitalRead(pinoSo);
  la =digitalRead(pinoLa);
  si =digitalRead(pinoSi);
  do1=digitalRead(pinoDo1);

//verificando qual nota foi acionada
if(doh == 1 ){
  //Ativa a nota dó
  tone(pinoBuzzer, 523);
}
else if (re == 1){
  //Ativa a nota ré
  tone(pinoBuzzer, 587);
}
else if(mi == 1){
  //Ativa a nota mi
  tone(pinoBuzzer, 659);
}
else if (fa == 1){
  //Ativa a nota fa
  tone(pinoBuzzer, 349);
}
else if (so == 1){
  //Ativa a nota so
  tone(pinoBuzzer, 392);
}
else if (la == 1){
  //Ativa a nota la
  tone(pinoBuzzer, 440);
}
else if (si == 1){
  //Ativa a nota si
  tone(pinoBuzzer, 494);
}
else if (do1 == 1){
  //Ativa a nota do1
  tone(pinoBuzzer, 554);
 }

else {
  //Desliga a buzzer
  noTone(pinoBuzzer);
 }

delay(50); //tempo de execução da nota musical


}
