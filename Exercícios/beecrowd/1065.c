#include <stdio.h>
 
int main() {

    int cont = 0;
    int pares = 0;
    int n = 0;

    while (cont < 5){
        scanf("%d", &n);
        if (n % 2 == 0){
            pares++;
        }
        cont++;
    
    } 

    printf("%d valores pares\n", pares);
 
    return 0;
}