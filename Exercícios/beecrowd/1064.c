#include <stdio.h>
 
int main() {

    float n = 0;
    int positivos = 0;
    float somap = 0;
    float mediap = 0;
    int limite = 0;

    while (limite < 6)
    {
        scanf("%f", &n);
        limite++;
        if (n>0){
            positivos++;
            somap += n;
        }
    }
    mediap = somap / positivos;
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", mediap);
 
    return 0;
}