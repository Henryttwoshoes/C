#include <stdio.h>
#include <stdlib.h>

/* Inicio do programa*/

int main(){
    int qat = 0;
    int codep = 0;

    printf("Qual o codigo do produto? \n");
	scanf("%d", &codep);
	printf("Qual a quantidade? \n");
	scanf("%d", &qat);
	
	if (codep == 100) {
              printf("O preço final e %f", qat*1.20);
              
              }
	if (codep == 101) {
              printf("O preço final e %f", qat*1.30);
              
              }
	if (codep == 102) {
              printf("O preço final e %f", qat*1.50);
              
              }
	if (codep == 103) {
              printf("O preço final e %f", qat*1.20);
              
              }
	if (codep == 104) {
              printf("O preço final e %f", qat*1.70);
              
              }
	if (codep == 105) {
              printf("O preço final e %f", qat*2.20);
              
              }
	if (codep == 106) {
              printf("O preço final e %d", qat*1);
              
              }
 	system("pause");
	return 0;
}