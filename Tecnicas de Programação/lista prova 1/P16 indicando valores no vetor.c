#include <stdio.h>

void buscar_num(int valores[5], int busca);


int main(){
int valores[5];
int i, busca;

    // Escaneia os valores
    for (i = 0; i < 5; i++) {
        printf("Digite um valor do array (pode repetir): ");
        scanf("%d", &valores[i]);
        
    }

    // Escaneia o valor procurado
    printf("Qual valor voce deseja buscar?\n");
    scanf("%d", &busca);

    // Salva o indice(resultado da função) em uma variável para checar no if adiante
    buscar_num(valores, busca);


return(0);
}


// Função que imprime todos os índices onde o valor aparece

// A função aqui é void pois não precisa retornar nenhum valor para a main, apenas imprime os índices onde o número buscado aparece no vetor.
void buscar_num(int valores[5], int busca) {
    int encontrou = 0;

    // Primeiro laço for para ver se o valor existe no array
    for (int j = 0; j < 5; j++) {
        if (valores[j] == busca) {
            encontrou = 1;
        }
    }
    // Se a variável de controle for 1, faz-se um outro laço for da mesma estrutura mas desta vez ele imprime os valores na mensagem que indica em quais índices eles se encontram.
    if (encontrou == 1){
    printf("O numero %d encontra-se no(s) indice(s): ", busca);
    for (int j = 0; j < 5; j++) {
        if (valores[j] == busca) {
            printf("%d ", j);
        }
    }
    }

    // Condição para caso o valor não esteja no array.
    else if (!encontrou) {
        printf("O numero %d nao esta presente no vetor.", busca);
}
}