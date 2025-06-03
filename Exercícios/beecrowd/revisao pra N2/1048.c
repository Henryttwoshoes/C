#include <stdio.h>
#include <stdlib.h>


int main(){
    float atual;
    float percent;
    float ganho;
    float novo;

    scanf("%f", &atual);

    if (atual <= 400.00){
        percent = 0.15;
        ganho = atual*percent;
        novo = atual + ganho;
    } else if (atual > 400.01 && atual <= 800.00){
        percent = 0.12;
        ganho = atual*percent;
        novo = atual + ganho;
    } else if (atual > 800.01 && atual <= 1200.00){
        percent = 0.10;
        ganho = atual*percent;
        novo = atual + ganho;
    } else if (atual > 1200.01 && atual <= 2000.00){
        percent = 0.07;
        ganho = atual*percent;
        novo = atual + ganho;
    } else {
        percent = 0.04;
        ganho = atual*percent;
        novo = atual + ganho;
    }

    printf("Novo salario: %.2f\n", novo);
    printf("Reajuste ganho: %.2f\n", ganho);
    printf("Em percentual: %.0f %%\n", percent*100);



    return 0;
}