#include <stdio.h>
#include <stdlib.h>



// Estrutura de Nó da lista
typedef struct no
{
    int valor;
    struct no *proximo;
}No;
// ---------------------

typedef struct No * p_no;




p_no criar_lista(){
    return NULL;
}



// Procedimento para inserir no início
void inserir_no_inicio(No **lista, int num){
    /* Função recebe **lista, um ponteiro de ponteiro.
    
        Você quer mudar o valor do ponteiro lista da main.
        Mas em C, parâmetros são passados por cópia

        Então, para mudar um ponteiro externo, você precisa passar o endereço dele
        Logo:
            lista (na função) → é um ponteiro para ponteiro
            *lista → é o ponteiro original da main
    
    */


    No *novo = malloc(sizeof(No));
    /* *novo é um ponteiro para um nó recém-criado
        ele ainda não está ligado à lista

        novo ──▶ [No]
        lista ──▶ (ainda aponta para o início antigo)
        
        */

    if (novo){
        novo->valor = num;
        novo->proximo = *lista;

        /*
        *lista é o antigo início da lista
        Você faz o novo nó apontar para o antigo primeiro nó
        
        Antes:
        lista ──▶ A ──▶ B ──▶ NULL

        Depois dessa linha:
        novo ──▶ A ──▶ B ──▶ NULL
        lista ──▶ A ──▶ B ──▶ NULL
        
        */


        *lista = novo;
        /*
        Agora você diz:
        “o início da lista passa a ser o novo nó”

        Resultado final:
        lista ──▶ novo ──▶ A ──▶ B ──▶ NULL
        
        */


    }else{
        printf("Erro ao alocar memoria!\n");
    }
}
// ---------------------

// Procedimento para inserir no final

void inserir_no_fim(No **lista, int num){
    /* Função recebe **lista, um ponteiro de ponteiro.
    
        Você quer mudar o valor do ponteiro lista da main.
        Mas em C, parâmetros são passados por cópia

        Então, para mudar um ponteiro externo, você precisa passar o endereço dele
        Logo:
            lista (na função) → é um ponteiro para ponteiro
            *lista → é o ponteiro original da main
    
    */


    No *aux, *novo = malloc(sizeof(No));

    /* *novo é um ponteiro para um nó recém-criado
        ele ainda não está ligado à lista

        novo ──▶ [No]
        lista ──▶ (ainda aponta para o início antigo)
        
        */

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

void imprimirrec(No *no){

        if (no != NULL){
            printf("%d ", no->valor);
            imprimirrec(no->proximo);
    
    }
    
}

void destruir_lista(No *no){
    if (no != NULL){
        destruir_lista(no);
        free(no);
    }
}

int main(){

    int opcao, valor, anterior;
    No *lista = NULL;
    /*Lista = ponteiro para o INÍCIO da lista ligada("head")
        Nunca é um nó, sempre aponta para um.
        Começam como NULL pois começa VAZIA

        lista ──▶ [No] ──▶ [No] ──▶ NULL

*/
    do{
        printf("\n\t0 - Sair\n\t1 - Inserir no inicio\n\t2 - Inserir no Fim\n\t3 - Inserir no meio\n\t4 - Imprimir\n\t5 - Destruir\n\t");
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
                imprimirr(lista);
                printf("\nLista impressa recursivamente.");
                break;

                case 5:
                    destruir_lista(lista);
                    printf("\nLista destruída com sucesso.");
                    break;
            default:
                if(opcao != 0){
                    printf("Opcao invalida!\n");
                }
        }

    }while(opcao != 0);
    


	return 0;
}
