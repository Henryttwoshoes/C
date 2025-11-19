#include <stdio.h>
 
int main() {
    //int num = 0;
    int i = 0;

    //printf("Digite um numero inteiro: ");
    //scanf("%d", &num);

    for(i=0;i<49;i++){

    

    if (i % 2 == 0 && i % 3 == 0){
        printf("FizzBuzz.\n");
    }
    else if (i % 2 ==0){
        printf("Fizz.\n");
    } else if (i % 3 == 0){
        printf("Buzz.\n");
    } 

}
    return 0;
}