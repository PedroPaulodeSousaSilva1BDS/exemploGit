/*Declaração das variáveis */
float sal, novosal;


void setup() {
  // inicia a comunicação com o Serial monitor
  Serial.begin(9600);

  delay(1000);  //espera estratégica
}

void loop() {
  Serial.print("Digite o sal :");
  //Le o valor do serial e guarda na variavel sal
  sal = aguardeEntrada();
  Serial.println(sal);

  //Cálculo do novo salário:
  novosal = (sal + (sal * 25 / 100));

  //Exibe o valor do novo salário
  Serial.print("novosal :");
  Serial.println(novosal);
  delay(1000);
}

//criando uma função chamada
float aguardeEntrada() {
    while (!Serial.available()){
    //Aguarda até que um numero seja digitado

      
    }
    return Serial.parseFloat();
}
