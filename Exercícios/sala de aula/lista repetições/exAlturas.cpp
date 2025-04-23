#include <stdio.h>
#include <stdlib.h>

/* Inicio do programa*/

int main(){

float altC = 1.50;
float altZe = 1.10;
int anos = 0;
while (altZe < altC){

	altZe += 0.3;
	altC += 0.2;
	printf("%f \n %.2f", altZe);
	printf("%f \n %.2f", altC);
	anos++;
	
}

	printf("\nDemorou-se %d anos para Ze alcançar a altura de Chico.", anos);
	return 0;
}
