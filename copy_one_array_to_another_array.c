/*
copy to another array
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
    for(i=0;i<n;i++){printf("enter the value %d: ",i+1);scanf("%d",&arr[i]);}printf("\nthe elements in array 1   :\n\n\t");
    arra(n,arr);j=0;while(j<n){arr1[j]=arr[j];j++;}
    printf("\nthe elements in array 2:\n\n\t");
    arra(n,arr1);
    return 0;
}
