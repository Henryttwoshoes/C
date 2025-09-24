#include <stdio.h>

int menor_numero(int a, int b, int c){

    // Checando o menor
    if (a <= b && a <= c){
        return a;
    } else if (b <= a && b <= c){
        return b;
    } else {
        // Retorna o valor pois a própria função serve como variável para ser referenciada na main
        return c;
    }

}
 
int main() {
    int a, b,c;

    printf("Digite o numero a: ");
    scanf("%d", &a);
    printf("Digite o numero b: ");
    scanf("%d", &b);
    printf("Digite o numero c: ");
    scanf("%d", &c);
    
    
    printf("O menor numero apresentado eh: %d", menor_numero(a,b,c));
    
    return 0;


}