#include <stdio.h>
// * no argumento pra declarar que ele é um ponteiro
void duplica(float *x) {
// * nas variáveis para acessar o dado que está no endereço
   *x = 2*(*x);
}
int main(){
	float x = 10;
    // & na variável que está sendo passada para garantir que o processo ocorra
    duplica(&x);
	printf("%f",x);
}
