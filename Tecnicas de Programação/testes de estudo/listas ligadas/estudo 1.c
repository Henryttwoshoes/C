#include <stdio.h>
#include <stdlib.h>



// Estrutura de Nó da lista
typedef struct no
{
    int valor;
    struct no *proximo;
}No;
// ---------------------


// Procedimento para inserir no início
void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }else{
        printf("Erro ao alocar memoria!\n");
    }
}
// ---------------------

// Procedimento para inserir no final

void inserir_no_fim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = NULL;

        // É o primeiro?
        if(*lista == NULL){
            *lista = novo;
        } else{
            aux = *lista;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
            
        }
    }else{
        printf("Erro ao alocar memoria!\n");
    }

}

// ---------------------

// Procedimento para inserir no meio

void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        // É o primeiro? Ou seja, a lista está vazia?
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->valor != ant && aux->proximo){
                aux = aux->proximo;
                novo->proximo = aux->proximo;
                aux->proximo = novo;
            }
        }



    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}

// ---------------------

void imprimir(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
    
}


int main(){

    int opcao, valor, anterior;
    No *lista = NULL;


    do{
        printf("\n\t0 - Sair\n\t1 - Inserir no inicio\n\t2 - Inserir no Fim\n\t3 - Inserir no meio\n\t4 - Imprimir\n\t");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir_no_inicio(&lista, valor);
                break;
            
            case 2:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir_no_fim(&lista, valor);
                break;
            
            case 3:
                printf("Digite um valor e o valor de referencia: ");
                scanf("%d%d", &valor, &anterior); /* 2 %d e provavelmente outros % de outros tipos permitem mais de 
                                                    um scan de valor num mesmo scanf                                         */
                inserir_no_meio(&lista, valor, anterior);
                break;
            
            case 4:
                imprimir(lista);
                break;
            default:
                if(opcao != 0){
                    printf("Opcao invalida!\n");
                }
        }

    }while(opcao != 0);
    


	return 0;
}
