#include <stdio.h>


int maxv(int *v, int n) {
    printf(">> Entrando na funcao: maxv(v, %d)\n", n);

    if (n == 0) {  // caso base
        printf("   Caso base atingido: retornando v[0] = %d\n", v[0]);
        return v[0];
    }

    printf("   Chamando maxv(v, %d - 1) = maxv(v, %d)\n", n, n - 1);
    int max = maxv(v, n - 1);  // chamada recursiva

    printf("   Voltando da chamada maxv(v, %d), valor retornado = %d\n", n - 1, max);
    printf("   Comparando v[%d] = %d com max = %d\n", n, v[n], max);

    if (v[n] > max) {
        printf("   >>> v[%d] eh maior! Retornando %d\n\n", n, v[n]);
        return v[n];
    } else {
        printf("   >>> max continua sendo %d\n\n", max);
        return max;
    }
}

int main() {
    int vetor[10] = {23, 10, 5, 50, 25, 11, 3, 9, 7, 25};
    int n = 9;

    printf("Maior valor: %d\n", maxv(vetor, n));
    return 0;
}