#include <stdio.h>
#include <stdlib.h>

int main(){
    double salario = 2000;
    double aumento = 0.015;
    int i = 0;
    int anofinal = 0;

    printf("Digite o ano atual: ");
    scanf("%d", &anofinal);

    salario = salario+(salario*aumento);
    aumento = aumento*2;

    for(i=1997;i<anofinal;i++){
        salario = salario+(salario*aumento);
        aumento = aumento*2;
    }
    printf("O salario atual do funcionario e %.2f", salario);






    return 0;
}