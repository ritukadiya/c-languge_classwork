
#include <stdio.h>
int main() 
{
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   
   i=1;
   while(i <= (input - 'A' + 1)) 
   {
   	  j=1;
      while (j <= i) 
	  {
         printf("%c ", alphabet);
         ++j;
      }
      ++alphabet;
      printf("\n");
      ++i;
   }
}

