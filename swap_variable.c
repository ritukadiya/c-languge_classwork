#include<stdio.h>
main()
{
	int a=10,b=20;
	
	printf("\n\n\t before swap a=%d, b=%d",a,b);
	
	
	a=a*b;  //200
	b=a/b; //200/20=10
	a=a/b; //200/10=20
	
	printf("\n\n\t after swap a=%d, b=%d",a,b);
	
}
