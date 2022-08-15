#include "stdio.h"
int main(){
int value,val;

printf("enter the value :");
scanf("%d",&value);
val=value;
if(value<0){
    value=value*(-1);
    printf("\nthe positive value of %d is %d\n",val,value);
}
else{
    printf("\n%d is a positive value\n",val);
}

    return 0;
}
