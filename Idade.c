#include <stdio.h>
#include <stdlib.h>

int main()
{
	int iJ, iI;
	iJ = 17;
	iI = 60;
	
	int idade = 0;
	
	printf("\n\t\tDigite a idade de uma pessoa: ");
	scanf("%i", &idade);
	
	if(idade <= iJ)
	{
		printf("\n\tA idade informada e de um jovem.");
	}else{
		if(idade >= iI){
			printf("\n\tA idade informada e de um idoso.");
		}else{
			if( (idade > iJ)&&(idade < iI)){
				printf("\n\tA idade informada e de uma pessoa de meia idade");
			}
		}
	}
	
	// && se ambos forem verdadeiros
	// || se uma condicao é V ou se a outra é V
	return 0;
}