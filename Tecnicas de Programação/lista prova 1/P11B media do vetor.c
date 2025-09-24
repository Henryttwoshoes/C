#include <stdio.h>
#include <math.h>

float media_vetor(float vetor[4]);

int main() {
    float vetor[4];
    int i=0;

    for (i=0;i<4;i++){
    printf("Digite um valor do array:\n");
    scanf("%f",&vetor[i]);
    }
    
    printf("A media aritmetica do vetor apresentado eh: %f.1f", media_vetor(vetor));
    
    return 0;


}

float media_vetor(float vetor[4]){
    float soma = 0;
    int j = 0;

    for(j=0; j<4;j++){
        soma += vetor[j];
    }

    return soma / 4;
}



