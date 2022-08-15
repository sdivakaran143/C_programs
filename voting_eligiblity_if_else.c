/*/
voting eligiblity
*/
#include"stdio.h"
int main(){
    int age;
    printf("enter your age : ");
    scanf("%d",&age);

    if(age<18){
            printf("Sorry! you are not eligible for voting\n");
    }
    else{
        printf("congratulations! you are not eligible for voting\n");
    }
return 0;
}
