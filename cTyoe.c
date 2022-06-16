#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	printf("Digite o numero 1.\n");
	char c;
	c = getchar();
	
	if(c == '1'){
		printf("O caractere digitado esta correto.");
	}else{
		printf("O valor digitado e invalido.\n");
		printf("Voce digitou o caractere >%c<.", c);
	}
	
	
	return 0;
}