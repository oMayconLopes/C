#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char c;
	int i=0;
	
	do
	{
		i += 1;
		printf("\nDigite >0< para looping.");
		printf("\nNumero de %i vezes que passou no do.\n", i);
		c = getchar();
		
	}while ( c != '0');
	
	
	
	return 0;
}