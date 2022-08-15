#include"stdio.h"
int main(){
    int mark;

    printf("enter the mark you scored : ");
    scanf("%d",&mark);

    if(mark<50)
            printf("Oops! you Scored grade \"F\"");
    else if(mark<=60 )
        printf("justMiss! you Scored grade \"D\"");
    else if(mark<=70)
        printf("Better! you Scored grade \"C\"");
    else if(mark<=80 )
        printf("Good! you Scored grade \"B\"");
    else if(mark<=90)
        printf("congratulations! you Scored grade \"A\"");
    else
        printf("congratulations! you Scored grade \"A+\"");

return 0;
}
