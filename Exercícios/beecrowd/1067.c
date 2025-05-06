#include <stdio.h>
 
int main() {
 
    int n = 0;
    int imp = 0;

    scanf("%d", &n);
    while (imp < n){
        imp++;
        if (imp % 2 != 0){
            printf("%d\n", imp);
        }
    }
    return 0;
}