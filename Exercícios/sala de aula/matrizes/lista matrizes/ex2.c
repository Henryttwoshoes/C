/*

2- Faça um programa para gerar automaticamente numeros entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela devera conter 5 linhas de 5 números, gere estes dados de modo a nao ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.


*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	int bingo[5][5];
    int i, j, x, y, duplicado, numero;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            do {
                duplicado = 0;
                numero = rand() % 100;
                for (x = 0; x < 5; x++) {
                    for (y = 0; y < 5; y++) {
                        /*Checa se o número é duplicado e repete o loop quando isso acontece  */
                        if (x == i && y == j) break;
                        if (bingo[x][y] == numero) {
                            duplicado = 1;
                            break;
                        }
                    }
                    if (duplicado) break;
                }
            } while (duplicado);
            bingo[i][j] = numero;
        }
    }

    printf("Cartela de Bingo: \n");
    for(i=0;i<5;i++){
        for(j = 0; j<5; j++){
            printf("%2d ", bingo[i][j]);
        }
        printf("\n");
    }

 
    

    return 0;
}