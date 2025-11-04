#include <stdio.h>
int main(){
   int n, vzs, i;

   int resultado = 0;
   
   printf("Escolha o numero: ");
   scanf("%d", &n);

   printf("Quantas vezes: ");
   scanf("%d", &vzs);

   for(i=1;i<vzs;i++){
    resultado = resultado + n;
    printf("%d\n", resultado);
   }

   printf("%d\n", resultado);

return(0);
}