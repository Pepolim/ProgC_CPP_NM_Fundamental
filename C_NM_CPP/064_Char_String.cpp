#include <iostream>
#include <string>

int main() 
{
    std::string primeira_string 	= "Programa‡„o em ";
    std::string segunda_string 		= "C/C++ - ";
	std::string terceira_string		= "Fundamentos!";
    std::string resultado			= "";

    /** 
		Recordar: em 'C' n„o h  'string's, apenas vetores de caracteres.
		Em 'C++' a concatena‡„o ‚ feita usando o operador '+'...
		Esta abordagem de 'C++' ‚ mais intuitiva e mais segura na manipula‡„o
		de 'alfanum‚ricas' atrav‚s da classe 'string'. 
		Em 'C++' n„o precisamos (nesta fase) de nos preocupar com o tamanho das string's... 
	*/
	
	// Concatena as string's, com uma 'soma' tadicional
	resultado = primeira_string + segunda_string + terceira_string;
	
	// Mostra valores
    std::cout << "Primeira string: " << primeira_string  << std::endl;
    std::cout << "Segunda string: "  << segunda_string 	 << std::endl;
	std::cout << "Terceira string: " << terceira_string  << std::endl;
	
    std::cout << "Resultado final da concatena‡„o: " << resultado << std::endl;

	return 0;
}