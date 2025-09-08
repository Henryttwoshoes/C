#include <stdio.h>
int main(){
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
}