/*,array array sort(Asc to dsc)*/
#include "stdio.h"
void array(int n,int arry[n]){int i;
for(i=0;i<n;i++){
        printf("%d \t",arry[i]);}}


int main(){
    int i,j,val,n,a;
    printf("enter the size :");
    scanf("%d",&n);
    int arr[n],res[n];

    for(i=0;i<n;i++){
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);}
    printf("the value of array 1:\n");
    array(n,arr);

        for (i = 0;i<n;++i) {
            for (j=i+1;j<n;++j) {
                if (arr[i]>arr[j]){
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
printf("\nthe acending value of array 1:\n");
array(n,arr);

return 0;
}




