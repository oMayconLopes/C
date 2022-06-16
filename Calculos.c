#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2;
	num1 = 10;
	num2 = 5;
	
	int soma = num1 + num2;
	int sub = num1 - num2;
	int div = num1 / num2;
	int multi = num1 * num2;
		
//	printf ("%i\n %i\n %i\n %i", soma, sub, div, multi);
	
	printf("O resultado da soma e: %i\n", soma);
	printf("O resultado da subtracao e: %i\n", sub);
	printf("O resultado da divisao e: %i\n", div);
	printf("O resultado da multiplicacao e: %i\n", multi);
		
	return 0;
}