#include <stdio.h>

int main()
{
int valores[5] = {};
int i=0;


// Escaneia os valores
for (i=0;i<5;i++){
printf("Digite um valor do array:\n");
scanf("%d",&valores[i]);
}

// Faz a multiplicação pelo número de seus índices
for (i=0;i<5;i++){
    valores[i] =valores[i]*i;
}

// Imprime todos os valores multiplicados na tela
printf("Os valores são:\n");
for(i=0;i<5;i++){
printf("%d\n",valores[i]);
}
return(0);
}