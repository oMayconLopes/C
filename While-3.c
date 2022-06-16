#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int x = 0;
	char multi = 0;
	int numero = 0;
	
	printf("\n\tInforme o Fator multiplicador: ");
	scanf("%c", &multi);
	
	
	// 97 122
	for (x = 75; x < 122; x++){
		
		printf("\n\tTeste de ASCII %1c", x);	
		
	}
		
	
	
	/*
	char a;
	
	if(multi != 'a'){
		printf("\n\tVoce precisa digitar um Numero Inteiro");
	}else{
		printf("\n\tVoce digitiu um numero inteiro, sendo ele: %i", multi);
	}
	*/
	
	
	return 0;
}