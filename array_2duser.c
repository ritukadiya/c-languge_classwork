#include<stdio.h>
main()
{
	int i,j,a1[3][3],a2[3][3],sum[3][3];
	
	printf("\n..........array1.........");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Input element a1[%d][%d] : ",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\n..........array2.........");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Input element a2[%d][%d] : ",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a1[i][j]*a2[i][j];
		}
	}
	printf("\n........addition of two array.........\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
}
