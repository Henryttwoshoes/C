#include <stdio.h>
#include <math.h>

float distancia(float x1, float x2, float y1, float y2); 


int main() {
    float x1, x2, y1, y2;

    printf("Digite o x1: ");
    scanf("%f", &x1);
    printf("Digite o y1: ");
    scanf("%f", &y1);
    printf("Digite o x2: ");
    scanf("%f", &x2);
    printf("Digite o y2: ");
    scanf("%f", &y2);
   
    
    printf("A distancia apresentada entre os pontos eh: %.1f", distancia(x1,x2,y1,y2));
    
    return 0;


}

float distancia(float x1, float x2, float y1, float y2){
    float distancia = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

    return distancia;
}