/*
array revers
*/
#include "stdio.h"
void arra(int n,int arry[n]){int i;
for(i=0;i<n;i++){
        printf("%d \t",arry[i]);}}
int main(){
    int i,j,n,i0;
    printf("enter the size :");
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(i=0;i<n;i++){printf("enter the value %d: ",i+1);scanf("%d",&arr[i]);
    }printf("\nthe elements before reverse :\n\n\t");
    arra(n,arr);
    for(j=n-1,i=0;j>=0;j--,i++){arr1[i]=arr[j];}
    printf("\nthe elements after reverse :\n\n\t");
    arra(n,arr1);
    return 0;
}
