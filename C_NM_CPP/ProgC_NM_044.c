#include <stdio.h>

int main()
{
	// Este programa mostra as letras 'pequenas'...
	char c = 'a';
	char C = 'A';
	
	while(c <= 'z')
	{
		printf("\nLetra %c = %d", c, c);
		// c++;
		c = c + 1;
	}
	// E as 'grandes'?
	while(C <= 'Z')
	{
		printf("\nLetra %c = %d", C, C);
		// c++;
		C = C + 1;
	}
	// E fazer uma caixa??
	// Dica: tabela ASCII Português... ou então, escrever tudo...!?
	printf("\n%c%c%c%c%c\n%c   %c\n%c   %c\n%c%c%c%c%c", 206,205,205,205,206,206,206,206,206,206,205,205,205,206);
	
	return 0;
}