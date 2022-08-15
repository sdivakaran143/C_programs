#include "stdio.h"
int main(){
 int value,i,res;

 printf("Enter the number :");
 scanf("%d",&value);

 for(i=0;i=value/2;i++){
    if(value%i==0){
        printf("its a nt prime");
        break;
    }

 }
    return 0;
}
