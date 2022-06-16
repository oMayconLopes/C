#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i = 10;
	
	printf("\tDigite um numero != de 5: \n\t");
	scanf("%i", &i);
	
	if(i!=5)
	{
		printf("\tA expressao e:\n");
		printf("\tTRUE");
	}else
	{
		printf("\tA expressao e:\n");
		printf("\tFALSE");
	}
	
		
	
	/*
	printf("\n\t%i\n", i==1);		//comparação
	printf("\n\t%i\n", i!=1);		//comparação negativa
	printf("\n\t%i\n", !(i==1));	//! negação, igual a NOT
	*/
	
	// == comparação
	// != comparação negativa
	
	
	
	return 0;
}