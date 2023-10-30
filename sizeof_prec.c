#include<stdio.h>
main()
{
	int intType=10;
	float floatType=3.14;
	char charType='c';
	
	long int liType=999999222222;
	double doubleType=334455.556676;
	
	printf("\n\n\t size of integer : %d",sizeof(intType));
	printf("\n\n\t size of floating : %d",sizeof(floatType));
	printf("\n\n\t size of character: %d",sizeof(charType));
	printf("\n\n\t size of long integer : %d",sizeof(liType));
	printf("\n\n\t size of double : %d",sizeof(doubleType));
}
