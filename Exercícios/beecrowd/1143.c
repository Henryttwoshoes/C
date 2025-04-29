#include <stdio.h>
 
int main() {
 
int n = 0;
int qt = 1;

scanf("%d", &n);

while (qt < n+1){
    printf("%d %d %d\n", qt, qt*qt, qt*qt*qt);
    qt++;
}
    return 0;
}