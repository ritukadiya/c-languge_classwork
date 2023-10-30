#include<stdio.h>
main()
{
	// int a[10];  //array declaration
	int a[10],i,n;   //array declaration
	int even,odd;
	
	
	
	for (i=0;i<10;i++)
	{
		printf("\n\n a[%d] : ",i);
		scanf("%d",&a[i]);
		
		if (a[i]%2==0)
			even++;
		else
			odd++;
		printf("\n\n a[%d] : %d ",i,a[i]);
    }
    
    printf("\n........");
    printf("\n\n total even numbers are : %d",even);
    printf("\n\n total odd number are : %d",odd);
}
