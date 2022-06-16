#include <stdio.h>
/* Imprime a tabela com os caracteres ASCII de 32 a 254 */
int main() {
 unsigned char i;
 for (i = 32; i < 255; i++)
 printf("\ndecimal = %3d * hexadecimal = %2x * caracter =%1c",i,i,i);
}
