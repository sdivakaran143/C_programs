/*
array declaration,sum and average
*/
#include "stdio.h"
int main(){
    int n,i,sum=0,product=1;
    float ave;
    printf("enter the size :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
        product+=arr[i]}
    printf("\nthe elements are :\n\n\t");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);}
        ave=sum/n;
    printf("\n\nthe sum of the array is %d\n",sum);
    printf("\n\nthe product of the array is %d\n",product);
    printf("\n\nthe average of the  of the array is %.2f\n",ave);
return 0;
}
