#include <stdio.h>
 
int main() {
    int num = 0; 
    int soma = 0;

    while(1){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num == 0){
            break;
        } else {
            soma += num;
            printf("%d\n", soma);
        }
    }

    

    return 0;
}