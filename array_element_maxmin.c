#include<stdio.h>
main()
{
	int i,a[20],size,max,min;
	
	printf("\n\n Enter the size of array you want : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n Enter the value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n_______________________________");
	
	for(i=0;i<size;i++)
	{
		printf("\n\n a[%d]=%d ",i,a[i]);
	}
	printf("\n\n________________________________");
	
	max=a[0];
	min=a[0];
	
	for(i=0;i<size;i++)
	{
		if(a[i]>=max)
		{
			max=a[i];
		}
		
		if(a[i]<=min)
		{
			min=a[i];
		}
	}
	printf("\n\n Max element from array is %d",max);
	printf("\n\n Min element from array is %d",min);
}
