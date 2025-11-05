#include <stdio.h>

int fat(int n){
    if (n == 0) /* caso base*/
        return 1;
    else /* caso geral */
        return n * fat(n-1); /* instância menor */
}

int main(){
   int n = 5;

   printf("Fatorial: %d", fat(n));

return(0);
}