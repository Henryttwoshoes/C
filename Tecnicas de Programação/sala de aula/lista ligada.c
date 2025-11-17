#include <stdio.h>					
#define MAX 100

typedef struct No{   
    int dado;
    struct No *prox; // O Nó vai ter o ponteiro para o outro nó


}No;


typedef struct No * p_no;

int main() {

    No Nos[5];
    //No No1;
    //No No2;
    //No1.dado=100;
    //No1.prox=&No2;


    int i;
    int j;

    for(i=0;i<5;i++){
        printf("Digite o dado do No %d: ", i);
        scanf("%d", &Nos[i].dado);
    }

    printf("No 0 = %d\n", Nos[0].dado);
    for(j=1;j<5;j++){
         printf("No %d = %d\n", j, Nos[j].prox->dado);
    }





 /*   
    printf("No 1 = %d", No1.dado);
    printf("No 2 = %d", No1.prox->dado);
    //Formas diferentes de escrever o próximo nó da lista abaixo v
    printf("No 2 = %d", (*No1.prox).dado);
    printf("No 2 = %d", No1.prox->prox->dado);

*/

   return 0;

}