#include <stdio.h>


struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct ficha_aluno/* colocar o nome aqui no começo é opcional*/ {
   int ra;
   int telefone;
   char nome[30];
   char endereco[100];
   struct data nascimento;
}ficha_aluno; // tem que botar o nome renomeado no final aqui pra funfar

int main(){
   ficha_aluno alunos[2];
   int i;
   for(i=0;i<2;i++){
       printf("\nNome: ");
       scanf("%s",(char *)&alunos[i].nome);
       printf("\nIdade: ");
       scanf("%d",&alunos[i].telefone);
   }
   for(i=0;i<2;i++){
       printf("\n\nAluno %d",i);
       printf("\n    Nome: ");
       printf("%s",alunos[i].nome);
       printf("\n    Idade: ");
       printf("%d",alunos[i].telefone);
   }
   
   return(0);
}
