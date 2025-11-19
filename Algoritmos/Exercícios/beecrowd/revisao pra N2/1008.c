#include <stdio.h>
#include <stdlib.h>


int main(){
    int number,horas;
    float salario;

    scanf("%d", &number);
    scanf("%d", &horas);
    scanf("%f", &salario);

    salario = horas*salario;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salario);


    return 0;
}