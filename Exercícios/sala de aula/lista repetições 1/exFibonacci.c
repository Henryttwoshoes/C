#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
int n = 0;
int a = 0, b = 1, fibo = 0;



printf("Digite um numero: ");
scanf("%d", &n);
printf("Sequencia de Fibonacci ate %d:\n", n);

while (fibo <= n){
printf("%d \n", fibo);
fibo = a + b;
a = b;
b = fibo;
}

printf("%d \n", fibo);

printf("\n");
return 0;

}