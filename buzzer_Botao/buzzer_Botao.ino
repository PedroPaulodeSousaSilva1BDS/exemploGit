//constante para o pino buzzer
#define pinoBuzzer 2

//constante do botton
#define botton 4

//constante do led
#define pinoLedVermelho 3
//declaração da variavel de estado do botao
bool status = false;

void setup() {
  Serial.begin(9600);

  //modo do pino
  pinMode(pinoBuzzer,  OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(botton, INPUT);
delay(1000); //parada estratégica
}

void loop() {
 Serial.println(digitalRead(botton));
 if 
 (digitalRead(botton) == 1 && status == false) {
  Serial.println("Botão apertado ON...");
  tone(pinoBuzzer, 523); //nota c
  digitalWrite(pinoLedVermelho, HIGH);
  status = true;
  delay(1000);
 }
else if (digitalRead(botton) == 1 && status == true){
  Serial.println("Botão apertado OFF...");
 tone(pinoBuzzer, 523);// Nota musical dó
 digitalWrite(pinoLedVermelho, HIGH);
 delay(1000);
noTone(pinoBuzzer);//desliga a buzzer
 digitalWrite(pinoLedVermelho, LOW);//apaga o LED
 delay(1000);
}
 status = true;

}
