#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 40;
	int condicao = (i>20)&&(i<100);
	
		
	printf("%i\n", condicao);
	printf("%i\n", !condicao);
	
	system ("cls");
	
	int x = 10;
	int cond = 0;
	
	cond = (x==10)||(x<1);
	printf("\n\t%i TRUE || FALSE\n", cond);
	
	cond = (x==0)||(x!=1000);
	printf("\n\t%i FALSE || TRUE\n", cond);
	
	cond = (x==10)||(x!=0);
	printf("\n\t%i TRUE || TRUE\n", cond);
	
	cond = (x!=10)||(x==0);
	printf("\n\t%i FALSE || FALSE\n", cond);	
	
	// OPERADORES LOGICOS
	
	return 0;
}