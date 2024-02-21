//Declarção de variáveis de entrada
int N1;
int N2;
int N3;

//Declaração da variável da saída//
int S;
void setup() {
  

Serial.begin(9600)


N1=1;
N2=2;
N3=3;
S=0;

//Processamento das entradas
S=N1+N2+N3;
}

void loop() {
  // Código que será executado repetidamente
Serial.print("Hoje é o ultimo dia de janeiro!!!");//Mostra a frase monitor
delay(1000);//espera 1 segundo antes de seguir o loop

}