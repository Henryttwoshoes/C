#include <stdio.h>
#include <math.h>

float desvio_vetor(float vetor[4]);

int main() {
    float vetor[4];
    int i=0;
    // Escaneia os valores pra cada indice do array(de novo)
    for (i=0;i<4;i++){
    printf("Digite um valor do array: ");
    scanf("%f",&vetor[i]);
    }
    // Printa já chamando a função que faz o trabalho(de novo)
    printf("O desvio padrao do vetor apresentado eh: %.3f", desvio_vetor(vetor));
    
    return 0;


}

// Apliquei a fórmula do desvio padrão na função abaixo com ajuda de pesquisas na internet

float desvio_vetor(float vetor[4]){
    // Tamanho do vetor
    int n = 4;
    // Variáveis das somatórias separadas
    float soma_x = 0, soma_x2 = 0;

    // Exponenciação das somatórias
    for (int i = 0; i < n; i++) {
        soma_x += vetor[i];
        soma_x2 += pow(vetor[i], 2);
    }

    // Parte final da conta
    float parte1 = soma_x2;
    float parte2 = pow(soma_x, 2) / n;

    // Resultado final com o último passo da conta
    float resultado = sqrt((parte1 - parte2) / (n - 1));
    
    return resultado;
}



