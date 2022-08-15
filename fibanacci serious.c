/*
fibnooo serious
*/
#include "stdio.h"
int main(){
    int a=0,b=1,c,n,i;

    printf("Enter the n value :");
    scanf("%d",&n);printf("%d,%d,",a,b);

    for(i=0;i<=n-2;i++){
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }

    return 0;
}
