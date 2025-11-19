#include <stdio.h>
 
int main() {
    int senha;
    int tentativa;
    // Escaneia a senha
    printf("Defina uma senha para sua conta: ");
    scanf("%d", &senha);
    // Laço que permanece ativo até a senha ser adivinhada
    while(1){
        printf("Digite a senha numerica: ");
        scanf("%d", &tentativa);
        // Condicional que checa se a senha digitada é correta ou não
        if (tentativa == senha){
            printf("Senha correta!\n");
            break; // Encerra o laço caso a senha seja acertada, encerrando o programa.
        } else {
            printf("Senha incorreta, tente novamente.\n");
        }
    }

    

    return 0;
}