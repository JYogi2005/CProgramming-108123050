/*print greatest of three numbers*/
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter first no:");
scanf("%d",&a);
printf("entr 2nd no:");
scanf("%d",&b);
printf("enter 3rd no:");
scanf("%d",&c);

if(a>b){
	if(b>c)
	printf("a is greatest");
	else if(c>a){
	printf("c is greatest");
}
} 
else{
	if(c>b && c>a)
	printf("c is greatest");
	


}
return 0;
    
    	
}
