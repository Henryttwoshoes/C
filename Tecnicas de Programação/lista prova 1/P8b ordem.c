#include <stdio.h>
 
int main() {
    int a,b,c;
    //int menor,medio,maior;
    
    printf("Digite o numero a: ");
    scanf("%d", &a);
    printf("Digite o numero b: ");
    scanf("%d", &b);
    printf("Digite o numero c: ");
    scanf("%d", &c);

    /*// Checando o menor
    if (a <= b && a <= c){
        menor = a;
    } else if (b <= a && b <= c){
        menor = b;
    } else {
        menor = c;
    }
    // Checando o maior
    if (a >= b && a >= c){
        maior = a;
    } else if (b >= a && b >= c){
        maior = b;
    } else {
        maior = c;
    }
    // Checando o médio
    if (a != menor && a != maior){
        medio = a;
    } else if (b != menor && b != maior){
        medio = b;
    } else {
        medio = c;
    }*/

    // Troca-se as variáveis para garantir a ordem correta usando uma variável de troca.
    
    if (a < b){
        int temp = a; a = b; b = temp;
    } // Se a for maior que b então troca-se os valores de a e b onde fica garantido que a é menor ou igual a b
    
    if (a > c){
        int temp = a; a = c; c = temp;
    } // Se a for maior que c então trocamos os valores de a e c, fazendo com que a seja o menor dos três valores
    
    if (b > c){
        int temp = b; b = c; c = temp;
    } // Se b for maior que c então trocamos os valores de b e c e agora b é menor ou igual a c.

    /* 
    
    Com esse código todo os valores ficam em ordem crescente(da esquerda pra direita) a<b<c como foi pedido no exercício :D

    Os ifs garantem que com no máximo 3 trocas as variáveis ficarão em ordem crescente independente dos valores digitados.
    
    */

    printf("%d %d %d\n", a, b, c);
    
    return 0;


}