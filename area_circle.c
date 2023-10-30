#include<stdio.h>
main()
{
	int r;
	float pi=3.14, area;
	
	printf("\n\n input the value for radious : ");
	scanf("%d",&r);
	
	area=pi*(r*r);
	
	printf("\n\n\t area of circle : %.2f",area);
}
