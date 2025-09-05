PWM é uma técnica eletrónica que controla a potência de um dispositivo através do rápido ligar e desligar de uma corrente, variando o tempo que o sinal está "ligado" dentro de um ciclo. Serve para regular a velocidade de motores,
a luminosidade de LEDs, a carga de baterias em sistemas solares e a velocidade de ventiladores, entre outras aplicações, permitindo um controlo eficiente e uma simulação de sinais analógicos a partir de sinais digitais. 

PWM permite que você controle a intensidade de dispositivos como LEDs, motores, e outros componentes eletrônicos, de uma forma mais eficiente do que apenas ligar e desligar.
O PWM funciona enviando um sinal digital alternado entre 0 (desligado) e 1 (ligado), mas a chave está na duração do tempo em que o sinal permanece em 1 e em 0. Essa duração é chamada de duty cycle.

Duty Cycle: O tempo em que o sinal permanece "ligado" (em 1) em comparação com o tempo que ele permanece "desligado" (em 0).

Exemplo: Se o PWM estiver com duty cycle de 50%, o sinal vai alternar entre "ligado" e "desligado" por igual, ou seja, 50% do tempo ligado e 50% do tempo desligado.

uty cycle de 0%: O sinal está sempre desligado (sem saída).

Duty cycle de 100%: O sinal está sempre ligado (máxima intensidade).

Em uma frequência fixa, um sinal de PWM pode ser ajustado para controlar, por exemplo, a intensidade de um LED ou a velocidade de um motor.

Controle de Motores DC:

O PWM é usado para controlar a velocidade de um motor, ajustando a quantidade de tempo que ele fica ligado. Maior duty cycle significa mais tempo ligado e, portanto, maior velocidade do motor.

Fonte de Alimentação:

Fontes de alimentação que convertem uma tensão DC para uma tensão diferente muitas vezes usam PWM para controlar a saída.

Controle de Aquecedores, Ventiladores e Outros Dispositivos:

Dispositivos como aquecedores e ventiladores podem ser controlados de forma eficiente usando PWM.




O Arduino possui pinos que podem ser configurados para gerar sinais PWM. Normalmente, esses pinos têm a capacidade de controlar a largura do pulso com a função analogWrite().

Recapitulando: O Que Acontece Com a Tensão?

Em um sinal PWM, a tensão não é variável de forma contínua.

Ela oscila rapidamente entre 0V (desligado) e 5V (ligado).

O que muda é o tempo em que o sinal fica "ligado" (o duty cycle), que determina a média da tensão percebida pela carga.

A Importância do PWM:

Permite controlar a potência média de um dispositivo (LED, motor, etc.) de forma simples e eficiente, sem necessidade de circuitos analógicos.

Minimiza perdas de energia. Em vez de dissipar energia ajustando a tensão de forma contínua, o PWM liga/desliga, economizando energia.

Resumo: Como o "Tempo Ligado" Afeta a Tensão

Quanto maior o tempo ligado (ou seja, maior o duty cycle), maior será a tensão média percebida pela carga.

Em um duty cycle de 50%, o sinal está ligado metade do tempo, então a carga percebe uma média de 2.5V.

Em um duty cycle de 100%, o sinal está sempre ligado, então a carga recebe 5V constantemente.

#define tmp 3        // Define a constante 'tmp' como 3 (tempo de atraso em milissegundos entre cada passo do brilho)
#define led 8        // Define a constante 'led' como 8 (pino digital 8 será usado para o LED)
#define maximo 255   // Define o valor máximo do PWM (255 = 100% de intensidade)
#define minimo 0     // Define o valor mínimo do PWM (0 = LED apagado)

void setup() {
     pinMode(led,OUTPUT); // Configura o pino 8 como saída, ou seja, vai mandar sinal para o LED
}

void loop() {
  // Primeiro 'for' = aumenta o brilho do LED (efeito fade in)
  for(int i=minimo; i<maximo; i++) {
    analogWrite(led,i); // Envia para o LED o valor 'i' (controla o brilho via PWM, de 0 até 254)
    delay(tmp);         // Espera 'tmp' milissegundos antes de aumentar o brilho de novo
  }

  // Segundo 'for' = diminui o brilho do LED (efeito fade out)
  for(int i=maximo; i>minimo; i--) {
    analogWrite(led,i); // Envia para o LED o valor 'i' (controla o brilho via PWM, de 255 até 1)
    delay(tmp);         // Espera 'tmp' milissegundos antes de diminuir o brilho de novo
  }
}

Explicando os for:

for(int i=minimo; i<maximo; i++)

Começa com i = 0.

Enquanto i < 255, executa o bloco (aumentando o brilho).

A cada repetição, soma 1 → i++.

for(int i=maximo; i>minimo; i--)

Começa com i = 255.

Enquanto i > 0, executa o bloco (diminuindo o brilho).

A cada repetição, subtrai 1 → i--.
