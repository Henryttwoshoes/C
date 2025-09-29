#include <stdio.h>

int main(){
    int m, n;
    int contador=0;

    printf("Digite o tamanho da primeira sequencia: ");
    scanf("%d", &n);

    printf("Digite o tamanho da segunda sequencia: ");
    scanf("%d", &m);

    int seq1[n], seq2[m];

    int i=0, k;

    // Leitura do primeiro vetor
    for(k=0;k<n;k++){
        printf("Digite o valor %d da seq1: ", k);
        scanf("%d", &seq1[k]);
    }
    // Leitura do segundo vetor

    for(i=0;i<m;i++){
        printf("Digite o valor %d da seq2: ", i);
        scanf("%d", &seq2[i]);
    }

    // Percorrendo a segunda sequência
    for (int i = 0; i <= m - n; i++) { // Percorre todas as posições da seq2 onde a seq1 pode começar
    int igual = 1;
    // Para cada posição j, o laço interno compara os próximos n elementos de seq2 com os da seq1
    for (int j = 0; j < n; j++) {
        if (seq2[i + j] != seq1[j]) {
            igual = 0; // Se não forem iguais, igual permanece como 0 e não há incremento no contador
            break;
        }
    }
    if (igual) contador++; // se tiver algum recorte igual, adiciona +1 no contador
}

printf("Resultado: %d\n", contador);

return 0;
}