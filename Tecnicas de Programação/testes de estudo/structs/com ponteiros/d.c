#include <stdio.h>					

typedef struct data {   
    int dia;
    int mes;
    int ano;


}data;

int main() {

    data hoje[1];

    hoje[0].dia = 2;
    hoje[0].mes = 1;
    hoje[0].ano = 2007;


    data *p = &hoje[0]; /* cria um ponteiro do tipo data que pega todos os endereços da struct
                        nesse caso é uma struct só porque o vetor tem só 1 índice*/

    printf("Endereco do dia: %d\n", p->dia);
    printf("Endereco do mes: %p\n", &p->mes);
    printf("Endereco do ano: %p\n", (void*)&p->ano); /* dá pra fazer a mesma coisa da linha anterior com esse
    método (void*)
    */





 /*   
    printf("No 1 = %d", No1.dado);
    printf("No 2 = %d", No1.prox->dado);
    //Formas diferentes de escrever o próximo nó da lista abaixo v
    printf("No 2 = %d", (*No1.prox).dado);
    printf("No 2 = %d", No1.prox->prox->dado);

*/

   return 0;

}