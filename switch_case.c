#include"stdio.h"
int main(){
    int a;
    printf("enter the value  0 to 1 otherwise the program will exit");
    for(;;){
    printf("\nenter value : ");
    scanf("%d",&a);
    switch(a){
    case 1:
        printf("Hey! Sunday Its holiday");
        break;
    case 2:
        printf("Hey! Its monday");
        break;
    case 3:
        printf("Hey! Its tueswday");
        break;
    case 4:
        printf("Hey! Its wednesday");
        break;
    case 5:
        printf("Hey! Its thursday");
        break;
    case 6:
        printf("Hey! Its friday");
        break;
    case 7:
        printf("Hey! Its saturday");
        break;
    default:
        printf("Give input is not (1 to 7) the program is exited");
        exit(0);
    }
    }
return 0;
}
