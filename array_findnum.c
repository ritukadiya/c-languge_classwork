//search the element
#include<stdio.h>
main()
{
	int a[5];
	int i,num,flag=0,element;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n input array value : ");
		scanf("%d",&a[i]);
	}
	printf("\n\n............................");
    
	for(i=0;i<=4;i++)
	{
	    printf("\n\n array [%d] : %d",i,a[i]);
    }
    printf("\n\n input elemtnt to search : ");
    scanf("%d",&element);
    for(i=0;i<=5;i++)
    {
    	if(element==a[i])
    	{
    		flag=1;
		}
    }
    if (flag)
    	printf("\n\n element found..");
    else
		printf("\n\n element not found");	

}
