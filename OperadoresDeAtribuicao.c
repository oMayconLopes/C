#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i = 50;
	 
	printf("Soma: %i \n", i+=100);
	printf("Subtracao: %i \n", i-=50);	
	printf("Multiplicacao: %i \n", i*=3);
	printf("Divisao: %i \n", i/=3);
	printf("Resto: %i \n", i%=3);
	
	/*
	1) += soma
	2) -= subtração
	3) *= multiplicação
	4) /= divisão
	5) %= resto da divisao
	
	*/
	
	return 0;
}