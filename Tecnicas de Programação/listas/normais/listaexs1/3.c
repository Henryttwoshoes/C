#include <stdio.h>
 
int main() {
    int idade;
    int dif;

    scanf("%d", &idade);

    if (idade >= 18){
        dif = idade - 18;
        if (dif == 0) {
            printf("Voce deve se alistar este ano.");
        } else {
            printf("Voce ja tem idade para se alistar. Ja se passaram %d anos do periodo de alistamento.", dif);
        }
    } else {
        dif = 18 - idade;
        printf("Voce ainda nao tem idade para se alistar. Faltam %d anos.", dif);
    }

    return 0;
}