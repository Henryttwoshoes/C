#include <stdio.h>
#include <stdlib.h>

/* Inicio do programa*/

int main(){
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float n4 = 0;
	printf("Digite a primeira nota \n");
	scanf("%f", &n1);
	printf("Digite a segunda nota \n");
	scanf("%f", &n2);
	printf("Digite a terceira nota \n");
	scanf("%f", &n3);
	printf("Digite a quarta nota \n");
	scanf("%f", &n4);
	printf("A media final e: \n %f", (n1 + n2 + n3 + n4)/4);
	return 0;
}

