#include<stdio.h>
main()
{
	char str[5][20];
	int i;
	
	for (i=0;i<=4;i++)
	{
		printf("\n\n\t input a string : ");
		gets(str[i]);
		
	}
	for(i=0;i<=4;i++)
	printf("\n\n\t output : %s \n\n",str[i]);
}
