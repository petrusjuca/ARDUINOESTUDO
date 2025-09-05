       // metodo void eh um metodo sem retorno isso  usado p indicar que 
       // um método ou função não retorna nenhum valor.
       // Em vez de devolver um resultado, um método void executa uma ação específica 
        // metodo setup eh executado uma vez qunado ligamos, onde vamos inserir as configs inicias do nosso programa
        // podemos usar p inicar variavel, definir portas se sao de entrada ou saida
        //dps do metodo setup vamos pro metodo loop q fica executando pra sempre. o programa em si, o comportamento
        // dele fica na aba loop
        // p definir a porta e o modelo do arduino vc tem q colocar isso no programa arduino.ide 

        // porta digital varia de 1 a 0 igual uma onda quadrada, os estados sao definidos com HIGH ou LOW dependendo do ESTADO
        // high eh 5v e lol quase 0 v
            void setup()  {
  // put your setup code here, to run once:
  // primeiro vc configura o tipo da porta, se eela vai ser entrada ou saida. 
  // no caso vamos simular q estamos tirando 5v da porta do arduino pro led q ja ta dentro dele ent ela eh output

  pinMode(13, OUTPUT); // pinMode -- configuracoes da porta numero da porta. OUTPU - SAIDA INPUT - ENTRADA

          
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(13,HIGH); // digitalWrite --- estado das portas HIGH == ligada LOW == desligado
 delay(2000); // espera um parametro q eh a pausa e ele eh em milisegundos
digitalWrite(13, LOW); // apos 2 segundos ele vai apagar 
delay(2000); // apos 2 segundos ele liga dnv pq volta pro inicio ja q eh um loop
}
