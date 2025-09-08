#include <stdio.h>
 
int main() {
    int num, seg, min, hora;

    scanf("%d", &num);

    seg = num % 60;
    min = (num % 3600) / 60;
    hora = (num / 3600);
    printf("Esse valor equivale a %d segundos, %d minutos e %d horas", seg, min, hora);






    return 0;
}