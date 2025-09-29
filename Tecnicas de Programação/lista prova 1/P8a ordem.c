#include <stdio.h>
 
int main() {
    int a,b,c;
    int menor,medio,maior;
    // Escaneia os números
    printf("Digite o numero a: ");
    scanf("%d", &a);
    printf("Digite o numero b: ");
    scanf("%d", &b);
    printf("Digite o numero c: ");
    scanf("%d", &c);

    // Checando o menor
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
    }

    printf("%d %d %d\n", menor, medio, maior);
    
    return 0;


}