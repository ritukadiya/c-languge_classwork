#include<stdio.h>
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if (num%2==0)
		goto even;   //even called "label"
	else
		goto odd;    //odd called "label"
		
		even:
			printf("\n the number is even..");
			exit(0);
		odd:
			printf("\n the number id odd..");
			
}
