#define led 4
#define btn 3

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);// Diz para o Arduino que o pino btn(3) 
  // vai ser usado como entrada. // esse pino não vai mandar tensão
  // vai ler se tem 5V (HIGH) ou 0V (LOW).
  // Se você ligar um botão no pino 3 qnd o botão for pressionado e levar 5V
  // o Arduino vai ler HIGH // Quando não for pressionado (0V), vai ler LOW
}

void loop()
{
  if (digitalRead(btn) == HIGH){ //Essa função lê o estado elétrico do pino configurado
    // como entrada.
   //Retorna:
//HIGH → se o pino está recebendo tensão (~5V no Arduino Uno).
// LOW → se o pino está em nível baixo (0V).
    digitalWrite(led, HIGH);
    //dwrite Serve para mandar um sinal elétrico para um pino configurado como saída (OUTPUT).
    //O valor pode ser:

// HIGH → o Arduino coloca 5V (ou 3.3V em placas de 3.3V) nesse pino.

//LOW → o Arduino coloca 0V (terra/GND).
  }

else{
    digitalWrite(led, LOW);
  }
 
}
