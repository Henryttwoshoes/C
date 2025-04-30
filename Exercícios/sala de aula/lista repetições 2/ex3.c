#include <stdio.h>
#include <stdlib.h>

int main(){
    int limite = 0;
    int n = 0;
    int contador = 0;
    int soma = 0;
    int maior = 0;
    int menor = 0;



printf("Estabeleca um limite de numeros: ");
scanf("%d", &limite);

printf("Digite um numero: ");
    scanf("%d", &menor);

while (contador < limite-1){
    printf("Digite um numero: ");
    scanf("%d", &n);
    soma += n;
    contador++;
    if (n > maior){
        maior = n;
    }
    if (n < menor){
        menor = n;
    }

    
}

/* Mecanismo para ver qual é o maior e o menor número:*/


printf("\n Você digitou %d numeros\n", limite);
printf("A soma dos numeros e: %d \n", soma);
printf("A media dos numeros e igual a: %d\n", soma/limite);
printf("O maior valor foi %d\n", maior);
printf("O menor valor foi %d\n", menor);


    return 0;
}