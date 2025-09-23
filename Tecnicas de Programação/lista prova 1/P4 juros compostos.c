#include <stdio.h>


float jurosc(float valor, float mensal, float j, int t);

int main() {
    float ini, mensal, j, valor;
    int t;

    printf("Digite o valor inicial: ");
    scanf("%f", &ini);

    printf("Digite o deposito mensal: ");
    scanf("%f", &mensal);
    
    printf("Digite a taxa de juros mensal em porcentagem: ");
    scanf("%f", &j);

    printf("Digite o numero de meses: ");
    scanf("%d", &t);
    
    valor = ini;


    printf("Valor final apos %d meses: %.2f\n", t, jurosc(valor, mensal, j, t));

    return 0;
}


float jurosc(float valor, float mensal, float j, int t){
    for (int i = 0; i < t; i++) {
        valor = valor * (1 + j/100.0);
        valor = valor + mensal;        
    }
    return valor;
}
