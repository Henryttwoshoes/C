#include <stdio.h>

int buscar_num(int valores[5], int busca);


int main(){
int valores[5];
int i, busca, indice;

    // Escaneia os valores
    for (i = 0; i < 5; i++) {
        // Variável de controle para saber se o número foi repetido ou não
        int valido = 0;
    while (!valido) { // Enquanto for inverso de valido(1)
        printf("Digite um valor do array (sem repetir): ");
        scanf("%d", &valores[i]);
        valido = 1;
        // Verifica se já existe esse valor no array
        for (int j = 0; j < i; j++) {
            if (valores[i] == valores[j]) {
                printf("Valor repetido! Digite outro valor.\n");
                valido = 0;
                break;
            }
        }
    }
        
    }

    // Escaneia o valor procurado
    printf("Qual valor voce deseja buscar?\n");
    scanf("%d", &busca);

    // Salva o indice(resultado da função) em uma variável para checar no if adiante
    indice = buscar_num(valores, busca);

    // Checa se o número existe no array, caso o retorno da função(a própria variável indice) seja diferente de -1
    if (indice != -1) {
        printf("O numero %d encontra-se presente no indice %d do vetor", busca, indice);
    } else {
        printf("O numero %d nao esta presente no vetor", busca);
    }


return(0);
}


// Função que faz a busca do valor
int buscar_num(int valores[], int busca) { // não precisa colocar o numero do tamanho do vetor
    int j;
    for (j = 0; j < 5; j++) {
        if (busca == valores[j]) {
            return j;
        }
    }
    // Caso o laço for não retorne nada com o if, retorna -1
    return -1;
}