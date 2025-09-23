#include <stdio.h>
 
int main() {
    int senha;
    int tentativa;

    printf("Defina uma senha para sua conta: ");
    scanf("%d", &senha);

    while(1){
        printf("Digite a senha numerica: ");
        scanf("%d", &tentativa);

        if (tentativa == senha){
            printf("Senha correta!\n");
            break; // Encerra o laço
        } else {
            printf("Senha incorreta, tente novamente.\n");
        }
    }

    

    return 0;
}