#include <stdio.h>					
#define MAX 100

typedef struct {   
    double x, y;


}ponto;

int main() {

    ponto pontos[MAX];
    double cx, cy;


   int i, n;
   scanf("%d", &n);
   for (i = 0; i < n; i++){
       scanf("%lf %lf", &pontos[i].x, &pontos[i].y);
   }
   cx = cy = 0;
   for (i = 0; i < n; i++) {
       cx += pontos[i].x/n;
       cy += pontos[i].y/n;
   }
   printf("%.2lf %.2lf\n", cx, cy);
   return 0;

}