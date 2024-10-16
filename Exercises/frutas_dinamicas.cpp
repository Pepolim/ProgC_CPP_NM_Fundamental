#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

void exibirFrutas(const vector<string>& frutas) {
    cout << "\nLista de frutas:" << endl;
    for (size_t i = 0; i < frutas.size(); i++) {
        cout << i + 1 << ". " << frutas[i] << endl;
    }
}

int main() {
    vector<string> frutas = {"Maçã", "Banana", "Laranja", "Morango", "Uva"};

    while (true) {
        exibirFrutas(frutas);

        cout << "\nOpções:" << endl;
        cout << "1. Adicionar uma fruta" << endl;
        cout << "2. Sair" << endl;
        cout << "Escolha uma opção: ";

        int opcao;
        cin >> opcao;

        if (opcao == 1) {
            string novaFruta;
            cout << "Digite o nome da nova fruta: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer
            getline(cin, novaFruta);
            frutas.push_back(novaFruta);
            cout << "Fruta adicionada com sucesso!" << endl;
        } else if (opcao == 2) {
            cout << "Encerrando o programa. Obrigado!" << endl;
            break;
        } else {
            cout << "Opção inválida. Por favor, tente novamente." << endl;
        }
    }

    return 0;
}
