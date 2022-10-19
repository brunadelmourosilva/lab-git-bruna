#include <stdio.h>
#include <math.h>
 
 
void somatoria(int x, int y){
   int i;
   long int soma = 0;
   for(i = x; i <= y; i = i + 1){
       soma = soma + i;
   }

