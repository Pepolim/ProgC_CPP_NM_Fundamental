#include <stdio.h>

int main()
{
/*
Neste programa pretende-se mostrar
alguns exemplos de uso da instruçao
'printf()' - saida de dados (output)
-------------------------------------
Aproveitamos a deixa e usamos tambem
alguns tipos de dados permitidos em 'C'	
*/

char c = 'a';
char l[] = "programa";
float x = 345691256.9871;
double y = 76534213.9871;

printf("\n");
printf("Linha de texto simples.\n");
printf("c: %c \n", c);
printf("c: (%d) \n", c); // %d = tabela ascii do c
printf("x: %f \n", x);// %f = mostra float,necessario indicar casas decimais
printf("y: %g \n", y);// %g = mostra float com precisao
printf("l: %s \n", l);// %s = mostra string
printf("\n");

//o mesmo, mas agora usando só uma linha de codigo
printf("c: %c \n c: (%d) \n x: %f \n y: %g \n l: %s \n",c,c,x,y,l);

/*




*/
	
}