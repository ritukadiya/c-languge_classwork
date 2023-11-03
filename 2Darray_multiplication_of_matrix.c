#include<stdio.h>
main()
{
	int i,j,k,a[3][3],b[3][3],c[3][3],sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Input element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Input element b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//sum=0;
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				//sum=sum+a[i][k]*b[k][j];
				//c[i][j]=sum;
				c[i][j]=c[i][j]+a[i][k]*b[k][j];	
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
