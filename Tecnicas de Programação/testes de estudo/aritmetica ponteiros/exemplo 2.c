#include <stdio.h>

void min_max(int *v, int n, int *p_min, int *p_max) {
   int i;
   *p_max = *p_min = v[0];
   for (i = 1; i < n; i++) {
       if (*p_max < v[i])
       *p_max = v[i];
       if (*p_min > v[i])
       *p_min = v[i];
   }
}
int main() {
   int n, min, max;
   scanf("%d", &n);
   int v[10] = {11,5,2,3,1,5,6,7,8,9};
   min_max(v, n, &min, &max);
   printf("Min: %d, Max: %d\n", min, max);
   return 0;
}
