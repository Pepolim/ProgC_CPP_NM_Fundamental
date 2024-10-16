#include <iostream>
#include <algorithm>

using namespace std;

int Soma(int num1, int num2);

int main() 
{
    int num1, num2;
    
    cout << "Introduza o primeiro n£mero inteiro: ";
    cin >> num1;
    
    cout << "Introduza o segundo n£mero inteiro: ";
    cin >> num2;
	
    cout << "A soma de todos os n£meros entre " << num1 << " e " << num2 << " ‚: " << Soma(num1,num2) << endl;
    
	return 0;
}

int Soma(int num1, int num2) 
{
	int soma = 0;
	
	if (num1 > num2) {
        swap(num1, num2);
    }
	
    for (int i = num1; i <= num2; i++) {
        soma += i;
    }
	return soma;
}