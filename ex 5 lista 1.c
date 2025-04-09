#include <stdio.h>
#include <stdlib.h>

/* Inicio do programa*/

int main(){

int horas = 0; 
/*int umaduas = 1;
float tresquatro = 1.40;
int cincomais = 2;*/

printf("Quanto tempo voce ficou no parque? \n");
scanf("%d", &horas);

if (horas == 1 || horas == 2){
    printf("Seu total a pagar e %d", horas*1);

}

if (horas == 3 || horas == 4){
    printf("Seu total a pagar e %f", horas*1.40);
}

if (horas >= 5) {
    printf("Seu total a pagar e %d", horas*2);
}




}