#include <stdio.h>
#include <stdlib.h>

int main(){

	int mat[4][4];
	int i,j;
    int maior = 0;
    int maior_i, maior_j;
	
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite o valor de mat[%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}

    for (i=0; i<4;i++){
        for(j=0;j<4;j++){
		    if (maior < mat[i][j]){
			    maior = mat[i][j];
                maior_i = i; // Armazena o índice da linha
                maior_j = j;
                /* As variáveis maior_i e maior_j são atualizadas apenas quando um novo maior valor é encontrado.
                Ao final do laço, elas conterão os índices do maior valor encontrado na matriz, independentemente de onde o laço terminou.
                */
	}
    }
    printf("O maior valor e %d na posicao mat[%d][%d]", maior, maior_i, maior_j);

    return 0;
}}
