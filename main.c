#include <stdio.h>
#include <math.h>
 
 
void somatoria(int x, int y){
   int i;
   long int soma = 0;
   for(i = x; i <= y; i = i + 1){
       soma = soma + i;
   }
      printf("\nA somatória é %ld\n",soma);
}


int main(void) {
   printf("\n\n :::::::::  INICIO DO PROGRAMA ::::::: \n\n");
 return 0;
}

