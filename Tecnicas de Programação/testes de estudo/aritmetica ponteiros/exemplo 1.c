#include <stdio.h>
int main(){
   int v[5] = {1000, 2000, 3000, 4000, 5000};
   int *p;			 
   p= &v[0];	 		 
   p=p+2;		   
   p++; 				   
   printf("\n%d %d %d", *p, *(p + 1), *(p-1)); // Talvez seja útil para manipular vetores com alocação dinâmica
   printf("\n%d %d %d %d", v[0], *v, v[1], *(v + 1)); // Enquanto que essa é a forma padrão, de vetores declarados comummente

   return 0;
}