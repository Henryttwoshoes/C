#include <stdio.h>					
#include <stdlib.h>
/*typedef struct data {   
    int dia;
    int mes;
    int ano;


}data;*/

int main() {

    int *v;
    int n = 4;
    int i;

    int desaloca;
    
    v = malloc(n * sizeof(int));
    if (!v) return 1; /* checar erro de alocação */


    for(i=0;i<n;i++){
        printf("Digite o valor do indice [%d] = ", i);
        scanf("%d", &v[i]);
    }

    for(i=0;i<n;i++){
        printf("\nValor de [%d] = %d", i, v[i]);
    }

    printf("\nDeseja desalocar? 1 Para sim e 0 para nao: ");
    if (scanf("%d", &desaloca) != 1) {
        desaloca = 0; /* fallback se leitura falhar */
    }
    
    switch(desaloca){
        case 1:
            free(v);
            printf("O vetor foi desalocado.\n");
            v = NULL;
            break;
        case 0:
            printf("O vetor foi mantido.\n");
            break;
        }  
        
        if (v != NULL) {
        for (i = 0; i < n; i++) {
            printf("\nValor de [%d] = %d", i, v[i]);
        }
    }



   return 0;

}