// Questão II (5,0) - Um Expoente de Mersenne é um número natural n, tal que o número de
// Mersenne (número da forma Mn = 2n-1) por ele gerado também é primo. Escreva um
// programa em C, que gere a lista dos primeiros 20 Expoentes de Mersenne, com seus
// respectivos números de Mersenne

#include <stdio.h>
#define EXPOENTES 7

int main(){
  int i, j, boo, base, k, nmersenne, enter, mersenne, div, cont;
  enter=2;
  cont=0;
  while(cont<EXPOENTES){ 
    base=1;
    for(j=0;j<enter; j++){
      base*=2;
    }
      mersenne=base-1;
    
  
  boo=1;
  for(i=2;i*i<=mersenne; i++){ 
    if(mersenne%i==0){ 
      boo=0;
    break;
    }
  }
  if(boo){
    printf("\nexpoente %d mersenne: %d\n", enter, mersenne);
  cont++;
  }
  enter++;
}
}