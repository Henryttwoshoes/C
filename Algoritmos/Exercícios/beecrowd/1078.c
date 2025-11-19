#include <stdio.h>
#include <stdlib.h>

int main(){

    int N = 0;
    int tabua = 1;
    scanf("%d", &N);
    
        while (tabua <= 10){
            printf("%d x %d = %d \n", tabua, N, tabua*N);
            tabua++;
        }
    
    
}

/*TAMBÉM É POSSÍVEL COM:


    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, N, i * N);
    }

    return 0;
}
*/