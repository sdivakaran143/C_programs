/*to find the value is occur and display the position*/
#include "stdio.h"
int main(){
    int i,j=0,n,val,v=0;
    printf("enter the size :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);}
    printf("\n\nenter the value to find :");
    scanf("%d",&val);
    for(i=0;i<n;i++){
            if(val==arr[i]){
            printf("\n\nthe value %d found at the position %d\n",val,i);
            v=1;
        }
        else if(val!=arr[i]){
                if(i==n-1 && v==0){
                    printf("\n\nthe value %d is not found at the array\n",val);
            }
        }
    }
return 0;
}
