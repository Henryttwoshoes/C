#include <stdio.h>
#include <stdlib.h>

int main() {
    float km;
    float l;
    printf("Quantos km? \n");
	scanf("%f", &km);
	printf("Quantos litros? \n");
	scanf("%f", &l);
	if (km / l <= 8) {
          printf("Venda seu carro \n");
          }
    if (km / l <= 12 && km / l >= 8){
           printf("Economico! \n");
           }
	if (km / l > 12){
           printf("Super economico! \n");
 
 }
 system ("pause");
 return 0;
 }
