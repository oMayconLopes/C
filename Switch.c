#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	printf("Digite um valor entre 1 e 4\n\n\n\t>>> ");
	int i = 0;
	scanf("%i", &i);

	do{
	
	switch(i){
	case 1:
		printf ("\nValor digitado foi 'um'");
		break;
	case 2:
		printf ("\nValor digitado foi 'dois'");
		break;
	case 3:
		printf ("\nValor digitado foi 'tres'");
		break;
	case 4:
		printf ("\nValor digitado foi 'quatro'");
		break;
	default:
		printf ("\nValor digitado foi INVALIDO.");
	}
	
	
	printf("Deseja repetir?");
	scanf("%i", &i);
		
	}while(i!=0);

	
	
	
	
	
	
	return 0;
}