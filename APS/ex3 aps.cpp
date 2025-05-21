#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int inicio;
	int limite;
	int i =0;
	int soma =0;
	
	printf("Digite o inicio ");
	scanf("%d", &inicio);
	printf("Digite o limite ");
	scanf("%d", &limite);
	
	if(limite<inicio){
		printf("Valores invalidos\n");
		system ("pause");
	}
	
	for (i=inicio;i<limite;i++){
		if(i % 2 != 0){
			soma += i;
		}
	}
	printf("A soma e %d", soma);

    return 0;
}
