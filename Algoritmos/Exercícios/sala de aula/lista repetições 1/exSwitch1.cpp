#include <stdio.h>
#include <stdlib.h>

int main(){
	float km = 0;
	float ms = 0;
	int opcao;
	while (opcao !=3){
		printf("Escolha uma opcao: \n 1- converter para km/h em m/s \n 2- converter m/s em km/h \n 3- finalizar o programa");
		scanf("%d", &opcao);
	
		switch(opcao){
			case 1:
				printf("Coloque o valor em Km/h \n");
				scanf("%f", &km);
				printf("O valor em m/s e: %f", km/3.6);
				break;
			case 2:
				printf("Coloque o valor em m/s \n");
				scanf("%f", &ms);
				printf("O valor em km/h e: %f", ms*3.6);
				break;
			case 3:
				printf("Programa finalizado. \n");
				break;
			default :
				printf("Entrada invalida.");
				break;
	}
}	system ("pause");
	return 0;
}
