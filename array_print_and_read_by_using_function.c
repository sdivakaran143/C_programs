#include "stdio.h"
void val(int *arr){
	for(int i=0;i<10;i++){
		printf("enter the value %d : ",i+1);
		fflush(stdout);
	scanf("%d",&arr[i]);
	}
}
void prnt(int arr[10]){
	printf("the values inside the array is :\n");
	for(int i=0;i<10;i++){
printf("%d\t",arr[i]);	}
}
int main(){
	int arr[10];
	val(arr);
	prnt(arr);
	return 0;
}
