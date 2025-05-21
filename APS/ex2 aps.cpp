#include <stdio.h>
#include <stdlib.h>

int main(){

	int dum = 0;
	int ddois = 0;
	int valores[0];
	int roladas = 0;
	int i =0;
    
	printf("Digite um numero de roladas ");
	scanf("%d", &roladas);
	
	for(i=0;i<roladas;i++){
		dum = (rand() % 1) + 1;
        ddois = (rand() % 2) + 1;
        printf("--------------------\n");
        printf("D1 = %d e D2 %d\n", dum, ddois);
        if (dum == ddois){
        	printf("D1 e igual a D2\n");
		}
		if (dum > ddois){
			printf("D1 e maior que D2\n");
		}
		if (dum < ddois){
			printf("D2 e maior que D1\n");
		}
		printf("---------------------\n");
	}
	

    

    
    return 0;
}
