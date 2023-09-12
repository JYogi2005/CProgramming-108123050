/*program to convert kilometer to meter centimeter nd millimeter*/
#include <stdio.h>
int main()
{
float a,b,c,d;
printf("the number that should be converted:");
scanf("%f",&a);
b=a*1000;
c=b*100;
d=c*10;
printf("the number in meters:%f",b);
printf("the number in cms:%f",c);
printf("the number in mms:%f",d);
return 0;
}
