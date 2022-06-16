#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	char c;
	printf("Digite uma letra minuscula: ");
	scanf("%c", &c);
	
	if (c >= 'a')
	{
		printf("\nSegue a letra que voce digitou em maisculo: > %c < \n",toupper (c));
	}
	
	
	return 0;
}