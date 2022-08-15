#include "stdio.h"
int main(){

int a,b,c;

printf("enter the value of\"A\" :");
scanf("%d",&a);

printf("enter the value of\"B\" :");
scanf("%d",&b);

printf("enter the value of\"C\" :");
scanf("%d",&c);

printf("\nBefore swaping A=%d and B=%d and C=%d",a,b,c);

/*a=a+b;
b=a-b;
a=a-b;*/\
a=a+(b+c);
b=a-(b+c);
c=a-(b+c);
a=a-(b+c);

printf("\n\nafter swaping A=%d and B=%d and C=%d\n",a,b,c);

return 0;

}
