#include<stdio.h>
main()
{
	int n;
	printf("\n\n\t input the value of n : ");
	scanf("%d",&n);
	
	if (n%5==0)
	{
		if(n%3==0)
			printf("\n\n\t the number is divisible by 5 & 3 ");
		else 
		    printf("\n\n\t the number is not divisible by 5 & 3 ");
	}
	else
		printf("\n\n\t  the number is ");
}
