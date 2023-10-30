// C Program to print diamond pattern using star * 
#include <stdio.h> 
main() 
{ 
    int n = 5,j,i,k,comp; 
  
    i=0;
    while ( i < 2 * n - 1) 
	{ 
  
        if (i < n) 
		{ 
            comp = 2 * (n - i) - 1; 
        } 
        else 
		{ 
            comp = 2 * (i - n + 1) + 1; 
        } 
  
        j=0; 
        while ( j < comp) 
		{ 
            printf(" ");
			j++; 
        } 
  
        k=0;
        while( k < 2 * n - comp)
		{ 
            printf(" * ");
			k++; 
        } 
        printf("\n");
		i++; 
    } 
    return 0; 
}
