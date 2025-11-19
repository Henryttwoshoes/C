#include <stdio.h>
 
int main() {
 
    int N[1000];
    int T = 0;
    int i = 0;
    int in = 0;

    scanf("%d", &T);

    for (i=0;i<1000;i++){
        N[i] = in;
        in++;
        if (in == T) {
            in = 0;
        }
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}