#include<stdio.h>
main()
{
	char str[10];
	int i,count=0;
	printf("\n\n input a string");
	//scanf("%s",&str);
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("\n\n total no of character : %d",count);
}
