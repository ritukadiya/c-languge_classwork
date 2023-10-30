#include<stdio.h>
main()
{
	char i,j,n;
	char k=1;
	printf("\n input a number :");
	scanf("%d",&n);

	
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf(" %c ",k);
			k++;
			j++;
		}
		printf("\n");
		i++;
	}
} 
