#include <iostream>
#include <string>
#include <array>

using namespace std;

const int NUM_FRUTAS = 5;

int main() {
    // Criando um array de strings usando array
    array<string, NUM_FRUTAS> frutas = {
        "Maçã",
        "Banana",
        "Laranja",
        "Morango",
        "Uva"
    };

    cout << "Lista de frutas:" << endl;

    // Iterando sobre o array e imprimindo cada fruta
    for (int i = 0; i < NUM_FRUTAS; i++) {
        cout << i + 1 << ". " << frutas[i] << endl;
    }

    // Modificando um elemento do array
    frutas[2] = "Abacaxi";

    cout << "\nLista atualizada de frutas:" << endl;

    // Usando um range-based for loop para imprimir as frutas
    for (const auto& fruta : frutas) {
        cout << "- " << fruta << endl;
    }

    return 0;
}
