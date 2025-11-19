/*

1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.


*/



#include <stdio.h>
 
int main() {

    int i = 0;
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;

    
    soma += A[0] + A[1] + A[5];

    printf("%d", soma);

    A[4] = 100;

    for (i=0;i<6;i++){
        printf("%d\n", A[i]);
    }
    return 0;
}