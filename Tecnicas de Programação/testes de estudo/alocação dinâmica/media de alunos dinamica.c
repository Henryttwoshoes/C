#include <stdio.h>
#include <stdlib.h>

typedef struct media_aluno/* colocar o nome aqui no começo é opcional*/ {
   float notas[4];
   
}media_aluno; // tem que botar o nome renomeado no final aqui pra funfar

int main(){
    int i;
    int n = 4;
    media_aluno *aluno; // ponteiro para o conteúdo da struct
    aluno = malloc(n * sizeof(media_aluno));

    float media = 0;
    



    for (i=0;i<n;i++){
            printf("Digite a nota %d: ", i);
            scanf("%f", &aluno->notas[i]); // Usa-se o operador -> de ponteiro porque malloc retorna ponteiro
            media += aluno->notas[i];
    }

    for (i=0;i<n;i++){
            printf("Nota %d = %.1f\n", i, aluno->notas[i]);;
    }
        media = media / n;
        printf("Media do aluno = %.1f\n", media);
    

    return (0);
}