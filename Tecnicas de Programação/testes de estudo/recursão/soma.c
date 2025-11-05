#include <stdio.h>

int maxv(int *v, int n, int total){
    int sum = 0;
    if (n == -1) 
        return sum;
    sum = maxv(v, n-1, total);
    if (n > -1)
        return sum + v[n];
    else 
        return sum; 
}

int main(){
   int vetor[10] = {23, 10, 5 ,50, 25, 11, 3, 9, 7 ,25};
   int n = 9;
   int i = 0;
   int somav = 0;
   for(i=0;i<10;i++){
    somav += vetor[i];
   }
   printf("a soma de todos os valores eh %d\n", somav);
   printf("Valor obtido pela recursao: %d", maxv(vetor, n, somav));

return(0);
}