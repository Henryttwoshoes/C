#include <stdio.h>

// Prototipando as funções para que elas possam rodar mesmo estando abaixo da main( )
int soma(int x, int y);
int ler();


int main() {
    
    int a = ler();
    int b = ler();
    int c = soma(a,b);

    printf("O valor da soma eh %d", c);
    
    return 0;
}


int soma(int x, int y){
    int resultado = x + y;
    return resultado;
}


// é possível criar funções que não recebem argumentos
int ler(){
    printf("Digite um numero inteiro: ");
    int leitura;
    scanf("%d", &leitura);
    if (leitura >= 1 && leitura <=10){
    return leitura;
    } else {
        return 0;
    }
}

