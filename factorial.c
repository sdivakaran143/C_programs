/*
factorial of n
*/
#include "stdio.h"
int main(){
int f=1,i,val;
printf("enter the value : ");
scanf("%d",&val);
i=val;
while(i!=0){
    f*=i;
    i--;
}
printf("the factorial of %d is %d",val,f);
return 0;
}
