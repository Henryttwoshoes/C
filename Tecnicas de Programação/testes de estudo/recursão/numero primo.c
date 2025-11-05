#include <stdio.h>

int primo(int n, int div){
    if (n <= 1) /* caso base*/
        return 0;
    else if (div >=n)
        return 1;
    else if (n % div == 0)
        return 0;
    else
        return primo(n, div+1); /* instância menor */
}

int main(){
   int n = 7;
   int div = 2;

   printf("Valor eh primo? %d", primo(n, div));

return(0);
}