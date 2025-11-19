#include <stdio.h>
 
int main() {

    int x = 0;
    int y = 0;
    int cont = 0;
    int div = 0;

    scanf("%d", &x);
    scanf("%d", &y);


    while ((x % 5 == 2 || x % 5 == 3) && cont < 0){
        div = x / y;
        printf("%d", div);
        cont = div;
    }



 
    return 0;
}