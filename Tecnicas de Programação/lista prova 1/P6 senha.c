#include <stdio.h>
 
int main() {
    int data1[3];
    int data2[3];

    // Armazenando as duas datas
    printf("Digite o dia da 1a data ");
    scanf("%d", &data1[0]);

    printf("Digite o mes da 1a data ");
    scanf("%d", &data1[1]);

    printf("Digite o ano ");
    scanf("%d", &data1[2]);

    printf("Digite o dia da 2a data ");
    scanf("%d", &data2[0]);

    printf("Digite o mes da 2a data ");
    scanf("%d", &data2[1]);

    printf("Digite o ano 2a data ");
    scanf("%d", &data2[2]);

    // Checando qual data ocorreu primeiro ocorreu primero
    if (data1[2] < data2[2]){
        printf("A data 1 eh mais antiga.\n");
    } else if (data1[2] > data2[2]){
        printf("A data 2 eh mais antiga.\n");
    // Se o ano é igual, checa-se o mês
    } else {
        if (data1[1] < data2[1]){
        printf("A data 1 eh mais antiga.\n");
    } else if (data1[1] > data2[1]){
        printf("A data 2 eh mais antiga.\n");
    // Se o mês é igual, checa-se o dia
    } else 
        if (data1[0] < data2[0]){
        printf("A data 1 eh mais antiga.\n");
    } else if (data1[0] > data2[0]){
        printf("A data 2 eh mais antiga.\n");
    // Se tudo for igual, então as datas são iguais.
    } else{
        printf("As duas datas são iguais.\n");
    }

    }

    

    return 0;
}