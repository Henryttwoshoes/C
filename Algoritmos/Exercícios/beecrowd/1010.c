#include <stdio.h>
 
int main() {

    int codigo1 = 0;
    int qt1 = 0;
    float preco1 = 0;
    int codigo2 = 0;
    int qt2 = 0;
    float preco2 = 0;

	scanf("%d %d %f", &codigo1, &qt1, &preco1);

    float valor1 = qt1*preco1;

    scanf("%d %d %f", &codigo2, &qt2, &preco2);

    float valor2 = qt2*preco2;

    printf("VALOR A PAGAR: R$ %.2f\n", valor2 + valor1);
 
    return 0;
}