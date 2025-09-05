#define ledVermelho 8
#define ledAmarelo 9
#define ledVerde 10

/// ideal eh usar o define pois ele nao vai pegar esse valor na meomria do arduinio
// no define eele simplesmeente substitui o texto led pelo valor dentro dele na hora d acompilcao\
// isso fz com que a gnt economize memoriA, NA HORA DE COMPILAR ELE VAI LER EXATAMENTE O PINO\
// E N VAI ARMAZENAR NA MEMORIA A variavel
// A PORTA EH UM VALOR FIXO ELA N VARIA N COMPENSA GUARDAR NUMA CONST
// SHOW
// agora vmaos usar functions tbm, imagins q vamos querer chamar
// esses codigos mais vezes




/// configuracoes de pinagem, SE SAO DE SAIDA OU ENTRADA/
void setup(){
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT); // mesmo esquema, 
}


// vc cria um void qunado a gnt cria voids eestamos criando funcoes,
// dentro dessas funcoees colocamos o codigo
// 
// int tmp eh a gbt passando uma variavel do tempo criando num caso uma var
void vermelho(int tmp){ ///aqu temos a funcao vermelho
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(tmp); // a gnt passa a variavell de tempo
  // vermelho(7000); -- mas essa linha se inutiliza, para colocarmos o delay
  // temos q passar um parametro pra funcao (uma caracteristica)
  // utillizamos um parametroou seja criamos uma variavel 
}



void verde(int tmp){  
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(tmp);
}

void amarelo(int tmp) {
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(tmp); // ainda podemos fazer uma otimizacao, pense comigo
  // vamos declarar ainda eo tmp la em baixo certo em ms, porem
  /// se aqui ja fizessemos ( tmp*10000) poderiamos declarar apenas
  // ex: vermelho(7); chama a funcao vermelha, atribui 7 pra var tempo e dps multipica ela por 1000 dando 7 segundos sacou
  
}

void loop(){
   vermelho(7000);
   verde(9000);
   amarelo(7000);
  
}
