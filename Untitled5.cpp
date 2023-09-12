/*swap two numbers*/
#include <stdio.h>
int main()
{
int a,b,c;
printf("1st number:");
scanf("%d",&a);
printf("2nd number:");
scanf("%d",&b);

c=a;
a=b;
b=c;

printf("after swapping");
printf("first number:%d",a);
printf("second number:%d",b);
return 0;
}
