#include <stdio.h>
#include <stdlib.h>


int main(){

	int A[5], i, maior = 0;

	for (i=0; i<5;i++){
		printf("insira o numero %d", i);
		scanf("%d", &A[i]);
	}
	maior = A[0];
	
	for (i=0; i<5;i++){
		if (maior < A[i])
			maior = A[i];
	}
	printf("O maior valor e %d\n", maior);
	return 0;
}
