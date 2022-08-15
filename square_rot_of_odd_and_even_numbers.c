#include"stdio.h"
int main(){
int i;
printf("\nsqrt of odd numbers\n");
    for(i=1;i<=10;i++){
    (i%2==1)?printf("%d\t",i*i):
            printf("");
    }
printf("\nsqrt of even numbers\n");
    for(i=1;i<=10;i++){
    (i%2==0)?printf("%d\t",i*i):
            printf("");
    }

   /* int n,i,sum=0;
    printf("enter the n value :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("sum of %d is %d",n,sum);*/
return 0;
}
