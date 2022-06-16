#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	/*Incremento e Detrimento*/
	
	int ponto1, ponto2, tabuada;
	ponto1 = ponto2 = tabuada = 0;
	
	printf("\n\t\t\t########\n\t\t\tTABUADA!\n\t\t\t########\n\n");
	printf ("\n\tInforme o Valor de partida da Tabuada");
	printf("\n\t>>> ");
	scanf("%i", &ponto1);
	printf ("\n\tInforme o Valor de parada da Tabuada");
	printf("\n\t>>> ");
	scanf("%i", &ponto2);

	printf("\n\tInforme a tabuada que deseja visualizar\n");
	
	char duvida;

	printf("\n\t1 - Multiplicar");
	printf("\n\t2 - Dividir");
	printf("\n\t0 - Encerrar");
	printf("\n\t>>> ");
	
	duvida = getche();
	printf("\n");
	
	switch(duvida){
		case '1':
			for( ponto1; ponto1<=ponto2; ++ponto1){
			tabuada = ponto1 * ponto2;
			printf("\t%i X %i = %i\n", ponto1, ponto2, tabuada);
			}
		break;
		case '2':
			for( ponto2; ponto2<=ponto1; ++ponto2){
			tabuada = ponto1 / ponto2;
			//if(tabuada / ponto2 != 0){
				printf("\t%i / %i = %i\n", ponto1, ponto2, tabuada);
		//	}
			}
		break;
		default:
			printf("\n\tValor inserido INVALIDO.");
	}
		
	
	
	
	
	return 0;
}