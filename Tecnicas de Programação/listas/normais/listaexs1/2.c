#include <stdio.h>
 
int main() {
    int num;

    scanf("%d", &num);

    if((num%400 == 0) || (num%4 == 0)){
        printf("O ano eh bissexto.");
    } else {
        printf("Esse ano nao eh bissexto.");
    }

    


    return 0;
}