/** Um jogo da adivinhação foi criado por um engenheiro de telecomunicações chamado Mordechai
Meirovitz, na Romênia em 1971. O jogo ganhou o prestigiado prêmio do "Jogo do Ano" em 1974 e foi um enorme
sucesso comercial, sendo vendido em mais de 40 países.
Trata-se de um jogo de lógica cujo seu objetivo como jogador é descobrir a senha secreta escolhida por um
oponente. A senha a ser descoberta é formada por uma sequência de caracteres de algum alfabeto. Para descobrir
qual foi a senha, você "chuta" uma provável senha para o seu oponente. O chute é uma sequência de caracteres
com o mesmo número de caracteres da senha. E os caracteres devem pertencer ao mesmo alfabeto.
Após cada chute seu, você receberá uma resposta, que consiste de 2 inteiros (E,B) indicando o quão bom foi o seu
chute. Se um caractere do chute existe na senha na mesma posição (da string), então ele conta como "excelente"
(E). Caso contrário, se o caractere existe na senha, mas em uma posição diferente, ele conta como "bom" (B). Um
dado caractere do chute não é contado duas vezes (ou seja, se ele foi contado como excelente, não é contado como
bom). A tabela abaixo ilustra o jogo com alguns exemplos. 
**/
#include <stdio.h>

int main(void) {
  int senha[4], e, d, m, B=0, E=0;
  int code[4], i, j;
  
  
  for(i=0; i<4; i++){ 
  printf("chute uma senha:\n\n");
  scanf("%d", &senha[i]);
  }
  code[0]=1;
  code[1]=2;
  code[2]=3;
  code[3]=3;

  if(senha[0]==code[0]&&senha[1]==code[1]&&senha[2]==code[2]&&senha[3]==code[3]){
    printf("classificacao E/B= (4,0)\n\n");
  }else{
    for(j=0;j<4;j++)
     if (code[j] != senha[j]){
    B+=1;
  }else if(code[j]==senha[j]){
   E+=1;
  }
    printf("classificacao E/B= (%d,%d)", E, B);
  return 0;
}
}