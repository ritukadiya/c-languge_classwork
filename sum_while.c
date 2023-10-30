#include<stdio.h>
main()
{
	int sum,i,num;
	
	printf("\n\n input a number : \n");
	scanf("%d",&num);
	
	printf("\n numbers are : ");
	
	i=1;
	while(i<=num)
	{
		printf("%d + ",i);
		sum=sum+i;
		
		i=i+1;
		
	}
	
	printf("\n\n sum of all the numbers : %d",sum);
}
