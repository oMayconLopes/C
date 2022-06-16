#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	printf("Digite o numero 1:\n");
	char c;
	c = getchar (); //Biblioteca ctype
	

	
	if (c == '1')
	{
		printf("\nO caractere digitado esta correto.\n");
	}else{
		printf("\nO valor digiado e invalido.\n");
		printf("Voce digitou >%c<.\n");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}