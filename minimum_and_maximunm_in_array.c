/*find minimum and maximum in the array*/
#include "stdio.h"
void array(int n,int arry[n]){int i;
for(i=0;i<n;i++){
        printf("%d \t",arry[i]);}}

int main(){
int i,j=0,max,min,n;
    printf("enter the size :");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);}
    printf("the value of array 1:\n");
    array(n,arr);

  for (i=0;i<n;i++){
        for (j=0;j<n;j++){
        if(arr[i]<arr[j]){
            max=arr[j];
        }
    }
  }
  for (i=0;i<n;i++){
        for (j=0;j<n;j++){
        if(arr[i]>arr[j]){
            min=arr[j];
        }
        }
  }
printf("\nthe maximum number in a array is %d",max);
printf("\nthe minimum number in a array is %d",min);
 return 0;
}
