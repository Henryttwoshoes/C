#include <stdio.h>
#include <math.h>

float media_vetor(float vetor[4]);

int main() {
    float vetor[4];
    int i=0;
// Escaneia os valores pra cada indice do array
    for (i=0;i<4;i++){
    printf("Digite um valor do array:\n");
    scanf("%f",&vetor[i]);
    }
    // Printa já chamando a função que faz o trabalho
    printf("A media aritmetica do vetor apresentado eh: %f.1f", media_vetor(vetor));
    
    return 0;


}

float media_vetor(float vetor[4]){
    // Inicializa as variáveis locais da função
    float soma = 0;
    int j = 0;
    // Executa a soma dos valores passando por cada valor dos índices do array
    for(j=0; j<4;j++){
        soma += vetor[j];
    }
    // Cálcula a média dos valores com a soma obtida anteriormente.
    return soma / 4;
}



