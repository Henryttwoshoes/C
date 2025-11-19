#include <stdio.h>
 
int main() {
 
    float x;
    scanf("%f", &x);    
    float porcento, reajuste, novo_salario; 
    if (x <= 400.00){
        porcento = 15.0/ 100.0;

    /*Para efetuar uma divisão de um valor float um dos valores deve ter casas decimais, se não, não funciona e o valor continua na sua forma primordial definida no programa.*/
    } else if (x <= 800.00){
        porcento = 12.0/ 100.0; 

        }
    else if (x <= 1200.00){
        porcento = 10.0/ 100.0;  
        }
    else if (x <= 2000.00 ){
        porcento = 7.0/ 100.0;     
        }
    else {
        porcento = 4.0/ 100.0; 
    }  

    reajuste = x * porcento;
    novo_salario = x + reajuste;
    
            printf("Novo salario: %.2f\n", novo_salario);
            printf("Reajuste ganho: %.2f\n", reajuste);
            printf("Em percentual: %.0f %%\n", porcento * 100);

    return 0;
}