// António Fonseca
// 2024-09-23
/* Pretende-se um programa que faça o seguinte: 
    - pede ao utilizador o nome do ficheiro de texto a criar;
    - pede ao utilizador o número total de cidades que pretende introduzir;
    - para cada cidade:
       - pede o nome da cidade;
       - pede a temperatura;
    - grava os dados introduzidos no ficheiro de texto;
    - mostra os dados no ecrã, lidos a partir do ficheiro.
*/ 
/*
    Este código foi (re)escrito em C++ e produz
    o mesmo resultado que o programa "EX_FX_102.c"
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nome_ficheiro;
    int num_cidades;

    // Pedir ao utilizador o nome do ficheiro
    cout << "Introduza o nome do ficheiro a criar: ";
    cin >> nome_ficheiro;

    // Abrir o ficheiro para escrita
    ofstream ficheiro(nome_ficheiro);
    if (!ficheiro.is_open()) {
        cerr << "Erro ao abrir o ficheiro para escrita.\n";
        return 1;
    }

    // Pedir o número de cidades
    cout << "Introduza o número total de cidades: ";
    cin >> num_cidades;

    // Recolher os dados de cada cidade
    for (int i = 0; i < num_cidades; i++) {
        string nome_cidade;
        float temperatura;

        cout << "Introduza o nome da cidade " << i + 1 << ": ";
        cin >> nome_cidade;

        cout << "Introduza a temperatura da cidade " << i + 1 << ": ";
        cin >> temperatura;

        // Gravar os dados no ficheiro
        ficheiro << nome_cidade << " " << temperatura << endl;
    }

    // Fechar o ficheiro após a escrita
    ficheiro.close();

    // Reabrir o ficheiro para leitura
    ifstream ficheiro_leitura(nome_ficheiro);
    if (!ficheiro_leitura.is_open()) {
        cerr << "Erro ao abrir o ficheiro para leitura.\n";
        return 1;
    }

    // Mostrar os dados no ecrã
    cout << "\nDados guardados no ficheiro '" << nome_ficheiro << "':\n";
    string nome_cidade;
    float temperatura;
    while (ficheiro_leitura >> nome_cidade >> temperatura) {
        cout << "Cidade: " << nome_cidade << ", Temperatura: " << temperatura << endl;
    }

    // Fechar o ficheiro após a leitura
    ficheiro_leitura.close();

    return 0;
}
