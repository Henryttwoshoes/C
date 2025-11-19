/*

2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

*/


#include <stdio.h>
 
int main() {

    int valores[6];
    int i = 0;

    for (i=0;i<6;i++){
        scanf("%d", &valores[i]);
    }

    for (i=0;i<6;i++){
        printf(" %d", valores[i]);
    }

    return 0;
}