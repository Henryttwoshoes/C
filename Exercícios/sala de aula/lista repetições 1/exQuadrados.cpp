#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
float n = 2;


while (n >0){

printf("Digite um numero: ");
scanf("%f", &n);


if (n>0) {
		printf("Seu quadrado e: %f \n seu cubo e:%f \n e sua raiz é%f \n", n*n, n*n*n, sqrt(n));

	}
else {
	printf("Entrada invalida");
}
}
return 0;
}
