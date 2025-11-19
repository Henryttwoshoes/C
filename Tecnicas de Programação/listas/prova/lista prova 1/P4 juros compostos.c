#include <stdio.h>


float jurosc(float valor, float mensal, float j, int t);

int main() {
    float ini, mensal, j, valor;
    int t;
    // Os printfs abaixo escaneiam cada variável para a conta de juros compostos
    printf("Digite o valor inicial: ");
    scanf("%f", &ini);

    printf("Digite o deposito mensal: ");
    scanf("%f", &mensal);
    
    printf("Digite a taxa de juros mensal em porcentagem: ");
    scanf("%f", &j);

    printf("Digite o numero de meses: ");
    scanf("%d", &t);
    // Assinala o valor de ini para valor    
    valor = ini;

    // Printa o resultado chamando a função que calcula o juros
    printf("Valor final apos %d meses: %.2f\n", t, jurosc(valor, mensal, j, t));

    return 0;
}

// Função que cálcula o juros
float jurosc(float valor, float mensal, float j, int t){
    // Pega todas as variáveis e cálcula o juros. O código abaixo aplica a fórmula do juros compostos e retorna o resultado na função.
    for (int i = 0; i < t; i++) {
        valor = valor * (1 + j/100.0);
        valor = valor + mensal;        
    }
    return valor;
}
