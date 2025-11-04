#include <stdio.h>

int maxv(int *v, int n){
    if (n == 0) /* caso base*/
        return v[0];
    int max = maxv(v, n - 1);
    if (v[n] > max)
        return v[n];
    else 
        return max; /* instância menor */
}

int main(){
   int vetor[10] = {23, 10, 5 ,50, 25, 11, 3, 9, 7 ,25};
   int n = 9;

   printf("Valor max do vetor: %d", maxv(vetor, n));

return(0);
}