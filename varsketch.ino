// C++ code
// conceitos de variaveis 
// vamos fzr a conexao de um led e pra isso vamos declarar variaveis
// a variavel servwe pra indicar o numero da porta q vamos utilizar

int led=10; // n precisa declarar varias vzs pq ela vai ser global
// a unica didferenca eh q tamo usando uma var
// ao invez do numero da porta\
// a parte boa de usar uma variavel eh q se vc usa o numeero da porta
// quando vc mudar ela vc tem q mudar em todas as linhas. 
// ent a variavel vai pegar e guardar o numero dentro dela
// isso evita mudar tudo manualmente ja q o valor vai ser atribuido dentro dela e n em cada canto

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  
}
