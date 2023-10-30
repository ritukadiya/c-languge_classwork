//print all even numbers between 1 to 100.
#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n\t enter all even number :");
	scanf("%d",&n);
	
	printf("\n\t even number 1 to %d are :\n",n);
	
	i=2;
	while(i<=n)
	{
		printf("\n %d",i);
		i+=2;
	}
}
