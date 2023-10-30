#include<stdio.h>
main()
{
	int i,a[20],element,num,flag=0,index;
	
	printf("\n\n enter the element of array = ");
	scanf("%d",&element);
	for(i=0;i<element;i++)
	{
		printf("\n\n enter the value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n________________________________");
	
	for(i=0;i<element;i++)
	{
		printf("\n\n a[%d]=%d",i,a[i]);	
	}
	printf("\n\n________________________________");
	printf("\n\n Enter the number you want to delete :");
	scanf("%d",&num);
	
	for(i=0;i<element;i++)
	{
		if(num==a[i])
		{
			flag=1;
			index=i;
		}
	}
	if(flag=0)
	{
		printf("\n\n Entered number is not found in array element!....");
	}
	else
	{
		printf("\n\n Index of an enter element is %d",index);
	}
	{
		for(i=index;i<element;i++)
		{
			a[i]=a[i+1];
		}
	}
	
	for (i=0;i<element;i++)
	{
		printf("\n\n a[%d] = %d",i,a[i]);
	}	
}
