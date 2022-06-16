#include <stdio.h>
#include <stdlib.h>

void m()
	
int main()
{
	//97 a 122 = a-z
	//65 a 90 = A-Z
	
	/*char a;
	printf("Digite UM caractere apenas: ");
	scanf("%c", &a);
	printf("O proximo caractere da tabela ASCII e >%c<\n\n", toupper (a+1));
	
	//system("cls");*/

	char letra;
	
	printf("\n\n\tValidacao de se digitado e A-Z\n\n");
	printf("\tDigite uma letra de A-Z: ");
	scanf("%c", &letra);
	printf("\n");
	
		
	if(letra >=97 && letra <=122 || letra >=65 && letra <=90){
		printf("Alfabeto em minusculo e: \n");
		if(letra>=97){
			for(letra; letra<=122; letra++)
			printf("\t%c", letra);
		}else if(letra>=65){
			for(letra; letra <=90; letra++)
			printf("\t%c", letra);
		}
	}else{
		printf("\tVoce nao digitou um valor valido.");
		}
	int alter;
	printf("\tVoce deseja reiniciar? ");
	scanf("%i", &alter);
	if(alter == 's'){
		m();
	}
	

	

	
	return 0;
}
