#include <stdio.h>
#include <stdlib.h>


int main(){
    int n1,n2;

    do {

    
    scanf("%d", &n1);
    scanf("%d", &n2);
    if (n1 > n2){
        printf("Decrescente\n");
    }
    else if (n1 < n2){
        printf("Crescente\n");
    }
    } while (n1 != n2);

    return 0;
}