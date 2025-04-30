#include <stdio.h>
#include <stdlib.h>

/* Inicio do programa*/

int main(){

    int n1 = 0;
    int n2 = 0;
    int opcao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);


    printf("---------------\n Escolha uma opcao: \n 1- adicao \n 2- subtracao \n 3- multiplicacao \n 4- divisao \n 5- saida \n---------------------");
    scanf("%d", &opcao);
while (opcao !=5){
    switch(opcao){
        case 1:
            printf("o resultado e: %d \n", n1+n2);
            printf("\nDe volta ao menu: ");
            break;
        case 2:
            printf("o resultado e: %d \n", n1-n2);
            printf("\nDe volta ao menu: ");
            break;
        case 3:
            printf("o resultado e: %d \n", n1*n2);
            printf("\nDe volta ao menu: ");
            break;
        case 4:
            printf("o resultado e: %d \n", n1/n2);
            printf("\nDe volta ao menu: ");
            break;
        case 5:
            printf("Programa finalizado. \n");
            break;
        default:
            printf("Entrada invalida.");
            break;
}
printf("\nEscolha uma nova opcao: \n---------------\n 1- adicao \n 2- subtracao \n 3- multiplicacao \n 4- divisao \n 5- saida \n---------------------");
scanf("%d", &opcao);
}
    system ("pause");
	return 0;
}
