/*sumin the array*/
#include "stdio.h"
int inp(int x,int y,int a[x][y]){
int i,j;
for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("enter the value for %d,%d :",i,j);
            scanf("%d",&a[i][j]);}}
}
void pnt(int x,int y,int a[x][y]){
int i,j;
for(i=0;i<x;i++){
        for(j=0;j<y;j++){
          printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int x,y,i,j;

    printf("enter the rows: ");
    scanf("%d",&x);
    printf("enter the column: ");
    scanf("%d",&y);

    int a[x][y],b[x][y],sum[x][y];

    a[x][y]=inp(x,y,a);
    printf("\nValue of array1 :\n");
    pnt(x,y,a);

    b[x][y]=inp(x,y,b);
    printf("\nvalue of array 2 :\n");
    pnt(x,y,b);

    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            sum[i][j]=a[i][j]+b[i][j];
            }}
        printf("\nsum of two matrix :\n");
        pnt(x,y,sum);

return 0;
}
