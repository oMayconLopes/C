#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int repet = 0, i=0, x=0;
	int alter = 0;
	printf("\n\tInforme o numero que deseja repetir: ");
	scanf("%i", &i);

	printf("\n\tInforme o numero de vezes que %i vai repetir: ", i);	
	scanf("%i", &repet);
	printf("\n\tVoce digitou: %i\n\n", repet);
	
	printf("\n\tVoce deseja realizar a acao, com 'WHILE' or 'FOR ?'");
	printf("\n\t\tUtilize: 1 - While e 2 - For");
	printf("\n\t\tInforme: ");
	scanf("%i", &alter);
	
	
	if(alter == 1){
		while( x < repet ){
		x = (x + 1);
		printf("\n\t%i", i);
	}
	}else if(alter == 2){
		for(x; x < repet; x++)
		printf("\n\t%i", i);		
	}else printf("\n\n\tVoce digitou invalido.");
	
	printf("\n\n\tO numero que deseja repetir e %i", i);
	
	
	return 0;
}
