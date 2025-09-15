#include <stdio.h>

int check = 0;

void checagem(int senha){
    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 1){
        check = 1;
        printf("Acesso autorizado!");
    } else {
        check = 0;
        printf("Acesso negado.");
    }
}



int main() {
    int senha = 0;
    printf("SISTEMA DE SENHA\n");
    printf("------------------\n");

    checagem(senha);

}