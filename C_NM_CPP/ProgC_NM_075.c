#include <stdio.h>

int a, b = 0;

// -------------------------
void funcaoPrt(void); 

// -------------------------
int main () {

    static int a = 1; 	//o a comeca em 1
	printf ("Main = a=%d, b=%d\n", a, b);//a = 1 b = 0
	funcaoPrt();//funcao a = 4 b = 2
	printf ("Main = a=%d, b=%d\n", a, b);//a = 1 b = 0
	a += 1;	//finalmente muda para 2
	printf ("Main = a=%d, b=%d\n", a, b);//a = 2 b = 0
	funcaoPrt();//a = 6 b = 2
	printf ("Main = a=%d, b=%d\n", a, b);//a = 2 b = 0 O A nunca mais foi mexido
	printf ("Terminei a execu‡„o do programa.\n"); }

// -------------------------  
void funcaoPrt(void) 
{
    static int a = 2;

	int b = 1; // sempre que usamos a funcao o b volta para 1
	
	//ambos o a e b aqui sao apenas da funcao e apenas modificam 
	//na funcao por causa de serem inicializados aqui
	
	a += ++b;// a = a(2) + b(2) porque comeca em 1 mas como aqui tem ++b adiciona mais 1 

	printf ("Funcao = a=%d, b=%d\n", a, b); 
}
