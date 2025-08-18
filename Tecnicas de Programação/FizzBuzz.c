#include <stdio.h>
 
int main() {
    int num = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0){
        printf("FizzBuzz.\n");
    }
    else if (num % 2 ==0){
        printf("Fizz.\n");
    } else if (num % 3 == 0){
        printf("Buzz.\n");
    } 

    return 0;
}