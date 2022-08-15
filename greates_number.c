#include"stdio.h"
int main(){
    int a,b;
    printf("enter value 1  : ");
    scanf("%d",&a);
    printf("enter value 2  : ");
    scanf("%d",&b);
    (a>b)?printf("%d is greater than %d",a,b):
            printf("%d is greater than %d",b,a);
return 0;
}
