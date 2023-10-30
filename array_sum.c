#include<stdio.h>
main()
{
	// int a[10];  //array declaration
	int a[5],i,sum=0;   //array declaration
	
	
	for (i=0;i<5;i++)
	{
		printf("\n\n a[%d] : ",i);
		scanf("%d",&a[i]);
		
		
	}
	printf("\n...");
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		printf("addition : ",sum);
    }
}
