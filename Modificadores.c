#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("%i bytes de memoria\n", sizeof(i));

	unsigned short int u;
	printf("%i bytes de memoria\n", sizeof(u));
	
	double r;
	printf("%d bytes de memoria\n", sizeof(r));

//	unsigned short double s;
//	printf("%d bytes de memoria", sizeof(s));

	char t;
	printf("%c bytes de memoria - Falta entender.\n", sizeof(t));

//	unsigned short float w;
//	printf("%i bytes de memoria", sizeof(w));
	
	
	
	/*
		1 - char
		2 - int
		3 - float
		4 - double
		5 - void - vazio
	
				MODIFICADORES
		1) signed	-> + e -
		2) unsigned -> + (Capacidade da varial dobra)
		3) long		-> aumentar a capacidade de armazenamento da nossa variavel
		4) shot		-> nos queremos diminuir o tamanho de armazenamento
	
	
	*/
	
	return 0;
}