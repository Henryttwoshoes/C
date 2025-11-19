#include <stdio.h>
 
int main() {

    int reais[10];
    int i = 0;
    int quadrados[10];

    for (i=0;i<10;i++){
        scanf("%d", &reais[i]);
    }
    printf("-------CONJUNTO DOS REAIS-------\n");
    for (i=0;i<10;i++){
        
        printf(" %d", reais[i]);
    }
    printf("\n--------------\n");
    for (i=0;i<10;i++){
        quadrados[i] = reais[i]*reais[i];
    }
    printf("-------CONJUNTO DOS QUADRADOS-------\n");
    for (i=0;i<10;i++){
        printf(" %d", quadrados[i]);
    }

    printf("\n--------------\n");
    return 0;
}