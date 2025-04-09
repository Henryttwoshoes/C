#include <stdio.h>
#include <stdlib.h>

/* Início do programa*/

int main(){
    int anot = 0;
    int idade = 0;
    printf("Por quantos anos voce trabalhou? \n");
	scanf("%d", &anot);
	printf("Qual a sua idade? \n");
	scanf("%d", &idade);
	
	if (idade >= 65 || anot >= 30 || (anot >= 25 && idade>= 60) ){
         printf("Voce ja pode se aposentar \n");
         }
          else {
          printf("Voce nao pode se aposentar \n");
 
               
}	system("pause");
	return 0;
}
