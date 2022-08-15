/*
AMSTRONG VALUE
*/
#include "stdio.h"
int main(){
 int value,sum=0,v,duplicate;
    printf("enter the value :");
    scanf("%d",&value);
    duplicate=value;
  while(value!=0){
    v=value%10;
    value=value/10;
    sum+=(v*v*v);
}
if(sum==duplicate){
    printf("%d is amstrong number",duplicate);
    }
else{
    printf("%d is not an amstrong number",duplicate);
}
return 0;
}
