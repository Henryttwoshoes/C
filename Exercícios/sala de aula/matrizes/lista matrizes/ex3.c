/*

3- Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva o numero de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o numero de alunos cuja pior nota foi na prova 3. Em caso de empate das piores notas de um aluno, o criterio de desempate é arbitrário, mas o aluno deve ser contabilizado apenas uma vez.

*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j;
    float notas[10][3];
    int pior1=0, pior2=0, pior3 =0;

    for (i=0;i<10;i++){
		for(j=0;j<3;j++){
			printf("Digite a nota [%d][%d]: ", i,j);
			scanf("%f", &notas[i][j]);
		}
	}
	
	for (i=0; i<10;i++){
        for(j=0;j<3;j++){
		    if (notas[i][0] <= notas[i][1] && notas[i][0] <= notas[i][2]) {
                pior1++;
            } else if (notas[i][1] <= notas[i][0] && notas[i][1] <= notas[i][2]) {
                pior2++;
            } else {
                pior3++;
            }
        }
    }

    printf("O numero de alunos que foram pior na prova 1 e: %d\n", pior1);
    printf("O numero de alunos que foram pior na prova 2 e: %d\n", pior2);
    printf("O numero de alunos que foram pior na prova 3 e: %d\n", pior3);

 
    

    return 0;
}