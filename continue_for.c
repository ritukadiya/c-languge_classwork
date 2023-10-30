#include<stdio.h>
main()
{
	int i;
	i=1;
	while(i<=5)
	{
		if(i==3)
		continue;
		
		printf("%d",i);
		i++;
	}
}
