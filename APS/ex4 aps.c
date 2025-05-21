#include <stdio.h>
#include <stdlib.h>

int main(){
	float altura = 0;
    float largura = 0;
    float area = 0;

    printf("Digite a altura ");
    scanf("%f", &altura);
    printf("Digite a largura ");
    scanf("%f", &largura);

    if (altura <=0 || largura <=0){
        printf("Valores invalidos.");
        return 0;
    } else {
        area = (largura*altura)/2;
        printf("A area do triangulo e %.1f", area);
    }

    return 0;
}