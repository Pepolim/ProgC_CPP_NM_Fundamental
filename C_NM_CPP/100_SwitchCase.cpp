#include <iostream>
 
using namespace std;
 
int main() {
    int numInteiro = 12;
   
   
    switch (numInteiro){
        case 10:
            cout << "O número definido encontra-se entre 10 e 14: " + to_string(numInteiro);  // mais simplificado ""<< numInteiro""
            break;
        case 11:
            cout << "O número definido encontra-se entre 10 e 14: 11";  
            break;
        case 12:
            cout << "O número definido encontra-se entre 10 e 14: 12";  
            break;
        case 13:
            cout << "O número definido encontra-se entre 10 e 14: 13";
            break;
        case 14:
            cout << "O número definido encontra-se entre 10 e 14: 14";
            break;
        default:
            cout << "não se encontra entre 10 e 14";
            break;
    }
 
    return 0;
}
 


