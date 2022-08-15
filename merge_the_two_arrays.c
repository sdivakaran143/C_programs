/*
2 arr merge into 1
*/
#include "stdio.h"
void array(int n,int arry[n]){int i;
for(i=0;i<n;i++){
        printf("%d \t",arry[i]);}}


int main(){
    int i,j,n,t=0,q,q2;
    printf("enter the size :");
    scanf("%d",&n);
    int arr[n],arr1[n],arr3[n+n];

    for(i=0;i<n;i++){
            printf("enter the value %d: ",i+1);
            scanf("%d",&arr[i]);}
    printf("the value of array 1:\n");
    array(n,arr);
    for(i=0;i<n;i++){
        printf("\nenter the value %d: ",i+1);
        scanf("%d",&arr1[i]);}
    printf("the value of array 2:\n");
    array(n,arr1);
    q=0;
    for(i=0;i<2;i++){
            for(j=0;j<n;j++){
                    if(t==0){
                        arr3[j]=arr[j];
                        q++;
                        if(q>n-1){
                                t=1;
                        }
                    }
                    else{
                        arr3[q]=arr1[j];
                        q++;
                    }
            }
    }
    printf("\n\nthe merge of array1 and array2 is :\n");
    array(n+n,arr3);
    return 0;
}
