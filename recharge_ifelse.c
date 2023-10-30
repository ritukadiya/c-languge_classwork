#include<stdio.h>
main()
{
	int recharge;
	printf("\n\n\t input value of recharge : ",recharge);
	scanf("%d",&recharge);
	
	if(recharge>=399)
		printf("\n you will eligible for cash back");
	else
		printf("\n sorry! you will not eligible for cash back");
}
