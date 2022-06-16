#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float nota1, nota2, nota3, nota4, media;
	nota1 = nota2 = nota3 = nota4, media = 0;
	
	printf("\t\t\t\tMedia Escolar 1.0\n\n");
	printf("\tDigite a sua primeira nota Bimestral: ");
	scanf("%f", &nota1);
	printf("\tDigite a sua segunda nota Bimestral: ");
	scanf("%f", &nota2);
	printf("\tDigite a sua terceira nota Bimestral: ");
	scanf("%f", &nota3);
	printf("\tDigite a sua quarta nota Bimestral: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2+ nota3 + nota4) / 4;
	
	printf("\n\tA sua media foi de: %f\n\n ", media);
	
	if (media >= 7)
	{
		printf("\tVoce foi aprovado!\n");
	}else{
		printf ("\tVoce foi reprovado!\n");
	}
	
	
	/*
	printf("\n\tVoce digitou a nota: %d", nota1);
	printf("\n\tVoce digitou a nota: %d", nota2);
	printf("\n\tVoce digitou a nota: %d", nota3);
	printf("\n\tVoce digitou a nota: %d", nota4);
	*/

;	
	return 0;
}