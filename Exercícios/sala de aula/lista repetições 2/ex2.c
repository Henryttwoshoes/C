#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int j = 1;
    int k = 1;

printf("PA de 1 a 100 com for:\n");

    for (i = 1; i<=100; i++){
        printf("%d\n", i);
    }

printf("PA de 1 a 100 com while:\n");

while (j < 100){
    j++;
    printf("%d\n", j);
}

printf("PA de 1 a 100 com do-while:\n");

do{
    k++;
    printf("%d\n", k);
} while ((k<100));



    return 0;
}

