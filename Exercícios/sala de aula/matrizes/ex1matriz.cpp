#include <stdio.h>
#include <stdlib.h>

int main(){


	int mat[3][3];
	int i,j;
	int soma = 0;
	
	printf("Digite os valores da matriz abaixo.\n");
	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o valor de mat[%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
			soma += mat[i][j];
		}
	}
	
	printf("A soma dos valores e %d", soma);



    return 0;
}
