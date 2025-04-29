#include <stdio.h>
 
int main() {

int qt = 0;
float n = 0;
int positivos = 0;

while (qt < 6){

    scanf("%f", &n);
    qt++;
    if (n > 0){
        positivos++;
    }
    if (n == 0){
        positivos = positivos;
    }
}
printf("%d valores positivos\n", positivos);
    return 0;
}