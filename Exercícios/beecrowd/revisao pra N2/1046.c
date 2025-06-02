#include <stdio.h>
#include <stdlib.h>


int main(){

    int inicio, termino, duracao;

    scanf("%d", &inicio);
    scanf("%d", &termino);

    if (inicio == termino){
            duracao = 24;


    } else if (termino > inicio){
        duracao = termino - inicio;
    
    } else {
        duracao = (24 - inicio) + termino;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);


    return 0;
}