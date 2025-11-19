#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Digite o primeiro valor \n");
	scanf("%d", &a);
	printf("Digite o segundo valor \n");
	scanf("%d", &b);
	printf("Digite o terceiro \n");
	scanf("%d", &c);
    if (a < b + c && b < c + a && c < a + b) {
        // Verifica se é um triângulo equilátero
        if (a == b && b == c) {
            printf("Triangulo equilatero \n");
        } else {
               if (a == b || a == b || b == c) {
              printf("Triangulo isosceles \n");
              } else {
              printf("Triangulo escaleno \n");
              }
              
              }
    } else {
        printf("Nao e triangulo \n");
    }
 system ("pause");
 return 0;
 }

  
