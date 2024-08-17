#include <stdio.h>

int main() { 
  int numero, binario, b1, b2, b3, b4, b5, b6, b7;
  int numero1, numero2, numero3, numero4;
  int ba1, ba2, ba3, ba4, ba5;
  
  printf("digite um numero de 5 digitos\n");
  scanf("%d", &numero);
if(numero>0&&numero<32){ 
  b1=(numero/16)%2;
  
  b2=(numero/8)%2;
  
  b3=(numero/4)%2;
  
  b4=(numero/2)%2;
  
  b5=(numero/1)%2;
}else{
  printf("numero invalido!");
}
 
  
  if(b5==0){
    b6=1;
    printf("%d, %d, %d, %d, %d, %d\n", b6, b1, b2, b3, b4, b5);
     ba2=((((b6*32+(b1*16)+b2*8)+b3*4)+b4*2)+b5*1);
    printf("%d\n",  ba2);
  }else{
    b6=0;
    b7=1;
    printf("%d, %d, %d, %d, %d, %d, %d\n",  b7,b6, b1, b2, b3, b4, b5);
    ba2=((((b6*64+(b7*32+(b1*16)+b2*8)+b3*4)+b4*2)+b5*1));
    printf("\n\n%d\n",  ba2);
  }

  
  // ba1=((((b1*16)+b2*8)+b3*4)+b4*2)+b5*1;

// printf("\n\n%d", ba1);
  
  return 0;
}