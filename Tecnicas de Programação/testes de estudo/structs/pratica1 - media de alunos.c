#include <stdio.h>

typedef struct/* colocar o nome aqui no começo é opcional*/ {
   double notas[4];
   double somanotas;
   
}notas_aluno; // tem que botar o nome renomeado no final aqui pra funfar

int main(){
    int i;
    int j;
    notas_aluno notas[4];
    double media[2];
    
    int max = 4;


    int alunos = 2;

    for (i=1;i<alunos+1;i++){
        notas[i].somanotas = 0;
        for(j=1;j<max+1;j++){
            printf("Digite a nota %d: ", j);
            scanf("%lf", &notas[i].notas[j-1]);
            notas[i].somanotas += notas[i].notas[j-1];
        }
        media[i] = notas[i].somanotas / 4;
        printf("Media do aluno %d = %.1lf\n", i, media[i]);
    }

    return (0);
}
