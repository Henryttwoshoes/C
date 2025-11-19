#include <stdio.h>
 
int main() {
    int dia;
    int mes;
    int ano;
    // Escaneia o dia
    printf("Digite o dia ");
    scanf("%d", &dia);
    // Escaneia o mês
    printf("Digite o mes ");
    scanf("%d", &mes);
    // Escaneia o ano
    printf("Digite o ano ");
    scanf("%d", &ano);
    // Formata a data apresentada, o %02d indica o tamanho de espaços da formatação de cada anexo do printf
    printf("A data de hoje e %02d/%02d/%02d\n", dia,mes,ano);






    return 0;
}