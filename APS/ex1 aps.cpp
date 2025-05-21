#include <stdio.h>
#include <stdlib.h>

int main(){


int soma = 0;
int i = 0;

for(i=0;i<1000;i++){
		if(i%5 == 0 || i%3 ==0){
	soma += i;
	
}}

printf("%d", soma);


    return 0;
}
