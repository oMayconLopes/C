#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int x;
	char question, conta;
	float num1, num2, resultado;
	system("color 2F");
	
	do
	{
			printf("\t\t\t\t################\n\t\t\t\tCalculadora 2.0\n\t\t\t\t################\n\n");	
		printf("\n\tVamos escolher qual Operacao Realizar.\n\n");
		printf("\t1 - Somar");
		printf("\t2 - Subtrair");
		printf("\t3 - Multiplicar");
		printf("\t4 - Dividir");
		printf("\t0 - Sair");
		printf("\n\t");
		
		conta = getche();
		//scanf("%c", &conta);
		num1 = num2 = resultado = 0;
		
		if(conta!='0'){
		printf("\n\tAgora informe o primeiro numero: ");
		scanf("%f", &num1);
		printf("\n\tAgora informe o segundo numero: ");
		scanf("%f", &num2);
		
		
		if (conta=='1'){
			resultado = num1 + num2;
		}else if(conta=='2'){
			resultado = num1 - num2;
		}else if(conta=='3'){
			resultado = num1 * num2;
		}else if(conta=='4'){
			resultado = num1 / num2;
		}}
		
		printf("\n\tO resultado e: %f\n\n", resultado);
		system("pause");
		system("cls");

		
	}while(conta!='0');
	
	return 0;
}