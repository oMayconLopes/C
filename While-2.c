#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 0;
	int valDigitado = 0;
	
	printf("\nInforme a quantidade de vezes, que voce deseja que repetimos a mesma instrucao.\n");
	scanf("%i", &valDigitado);
	
	while(x < valDigitado){
		printf("\n%i", x * 10);
		x = x + 1;
	}
	
	
	
	return 0;
}