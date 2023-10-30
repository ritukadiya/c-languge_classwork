//print multiplication table of any number
#include<stdio.h>
main()
{
	int i,num;
	
	printf("\n\t enter a number to print table :");
	scanf("%d",&num);
	
	i=1;
	while(i<=10)
	{
		printf("\n\t %d * %d = %d",num,i,(num*i));
		i++;
	}
}
