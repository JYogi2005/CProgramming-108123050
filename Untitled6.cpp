/*swapping without third variable*/
#include <stdio.h>
int main()
{
int a,b;
printf("first number=");
scanf("%d",&a);
printf("second number=");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("first number=%d",a);
printf("second number=%d",b);
return 0; 
 } 

