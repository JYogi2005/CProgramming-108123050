/*percentage of marks(5 subjects) each subject marks out of 100*/
#include <stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("first subject marks=");
scanf("%d",&a);
printf("second subject marks=");
scanf("%d",&b);
printf("third subject marks=");
scanf("%d",&c);
printf("fourth subject marks=");
scanf("%d",&d);
printf("fifth subject marks=");
scanf("%d",&e);
f=a+b+c+d+e;
g=f/5;
printf("percentage of marks=%d",g);
return 0;
}
