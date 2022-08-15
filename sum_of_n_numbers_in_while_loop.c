/*
sum using while lo0p
printing last number
*/
#include "stdio.h"
int main(){
/*int n=2,sum=0;

while(n>0){
     sum=sum+n;
     n--;
}
printf("%d",sum);*/

int a,d=0,pal;
printf("enter the value");
scanf("%d",&a);
pal=a;
while(a!=0){
    printf("%d",a%10);
    a=a/10;
    d++;
}
printf("\nthere are %d digits",d);
return 0;
}
