#include <stdio.h>
 
int main() {
    int num = 0; 
    int soma = 0;

    while(1){
        // Escaneia o número    
        printf("Digite um numero: ");
        scanf("%d", &num);
        // Laço que executa a soma enquanto o número escaneado não for igual a 0
        if (num == 0){
            break;// Se for igual a zero, encerra o laço e o programa.
        } else { // Se não, executa a soma
            soma += num;
            printf("%d\n", soma);
        }
    }

    

    return 0;
}