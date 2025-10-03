#include <stdio.h>
/*int main(){
   int i,a;
   a=0;
   for (i=0;i<5;i++){
       if(i==3){
           break;
       }
       a=a+1;
       printf("\n %d : %d",i,a);
  }
printf("\nSaiu do laco for\n");
return(0);
}*/


// teste inicial com funções em sala de aula
/*int soma(int num1, int num2){
    return(num1+num2);
}


int main(){
    int a, b;
    a=20;
    b=30;
    int resultado = soma(a,b);
    printf("%d", resultado);
}
*/

void duplica(int *a);
    



int main(){
    int a;

    printf("Digite o numero a: ");
    scanf("%d", &a);

    duplica(&a);

    printf("O dobro de a eh: %d", a);

}

void duplica(int *a){
    *a = 2*(*a);
}