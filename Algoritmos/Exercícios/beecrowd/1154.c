#include <stdio.h>
 
int main() {

    int n = 1;
    int nqt = 0;
    float soma = 0;
    float media = 0;
    
    while (n>0){
        scanf("%d", &n);
        if (n>0){
            nqt++;
            soma += n;
    }
    }
/*
NOTA:

Quando dois valores inteiros são divididos, isto resulta em uma divisão inteira. Se quiser que a divisão resulte em um valor float, um dos operandos deve ser do tipo float, se não, não dá um valor float.
*/


    media = soma / nqt;
    printf("%.2f\n", media);
 
    return 0;
}