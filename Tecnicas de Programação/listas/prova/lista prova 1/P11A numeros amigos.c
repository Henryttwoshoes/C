#include <stdio.h>
#include <math.h>

char* numero_amigo(int num1, int num2); 
int soma_divisores(int n);

int main() {
    int num1 = 0;
    int num2 = 0;
    // Escaneia os números
    printf("Digite o num1: ");
    scanf("%d", &num1);
    printf("Digite o num2: ");
    scanf("%d", &num2);
    // Printa o resultado chamando a função. o %s é porque a função é do tipo char
    printf("%s", numero_amigo(num1, num2));
    
    return 0;


}
// Função que executa o processo de checagem dos divisores e da sua soma
int soma_divisores(int n){
    int soma = 0;
    for (int i=1; i<n; i++){
        if (n % i == 0){
            soma += i;
        }
    }
    return soma;
}

// Esse char permite que o retorno seja uma string, por isso coloquei assim pois pesquisei se dava pra fazer uma função retornar uma string, professor. Assim irá aparecer True e False como você pediu.
// Essa é a função que checa se os números são amigos
char* numero_amigo(int num1, int num2){
    int soma_1 = soma_divisores(num1);
    int soma_2 = soma_divisores(num2);

    if (soma_1 == num2 && soma_2 == num1) {
        return "True"; // True
    } else {
        return "False"; // False
    }
}
