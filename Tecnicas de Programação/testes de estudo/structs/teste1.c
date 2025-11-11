#include <stdio.h>


struct data{
    int dia;
    int mes;
    int ano;
};

struct ficha_aluno {
   int ra;
   int telefone;
   char nome[30];
   char endereco[100];
   struct data nascimento;
}; // precisa colocar esse ; se não não funfa

int main(){
   struct ficha_aluno ra01;
   ra01.ra=2025;
   printf("Digite o nome: ");
   scanf("%s", ra01.nome);
   ra01.nascimento.dia=31;
   printf("\nRA=%d",ra01.ra);
   printf("\ndia=%d",ra01.nascimento.dia);
   printf("\n Nome = %s",ra01.nome);
   return(0);

}