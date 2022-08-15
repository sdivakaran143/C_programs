/*
sum of digit
*/
#include "stdio.h"
int call(a){
    int v,sum=0;
while(a!=0){
    v=a%10;
    sum+=v;
    a=a/10;
    }
 return sum;
}

int main(){
int a,v;
printf("enter the value : ");
scanf("%d",&a);
v=a;
for(;;){
    if(v/10==0){
            printf("the sum for single digit of %d is %d",a,v);
    break;
    }
    else{
        v=call(v);
    }
}
return 0;
}
