/* multiply 2 floating numbers*/
#include <stdio.h>
int main()
{
float a,b,c;
int d;
printf("enter 2 numbers=");
scanf("%f%f",&a,&b);
c=a*b;
d=c;
printf("product of 2 numbers in float:%f",c);
printf("product of 2 numbers in int:%d",d);
return 0;
}
