#include"stdio.h"
int main(){
    int a,b,c;
    printf("enter value 1  : ");
    scanf("%d",&a);
    printf("enter value 2  : ");
    scanf("%d",&b);
    printf("enter value 3  : ");
    scanf("%d",&c);

    if(a>b && a>c){
            printf("%d id greater than %d and %d",a,b,c);
    }
    else if(b>a && b>c){
         printf("%d id greater than %d and %d",b,a,c);
    }
    else{
        printf("%d id greater than %d and %d",c,a,b);
    }
