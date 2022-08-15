/*
power of the number
*/
#include "stdio.h"
int main(){
    int power,value,i,val;

    printf("Enter the value ");
    scanf("%d",&value);
    val=value;

    printf("Enter the power ");
    scanf("%d",&power);

    i=power-1;

    while(i!=0){
        value*=val;
        i--;
    }
    printf("\n%d^%d is %d",val,power,value);
    return 0;
}
