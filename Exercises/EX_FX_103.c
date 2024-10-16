// Nuno Pepolim
// 2024-09-23
/* Pretende-se um programa que faÃ§a o seguinte: 
    - pede ao utilizador o nome do ficheiro de texto a criar;
    - pede ao utilizador o nÃºmero total de cidades que pretende introduzir;
    - para cada cidade:
       - pede o nome da cidade;
       - pede a temperatura;
    - grava os dados introduzidos no ficheiro de texto;
    - mostra os dados no ecrÃ£, lidos a partir do ficheiro.

Alterações:
    1)  usar um array para as cidades e as temperaturas;
    2)  a recolha de dados das cidades e das temperaturas deve ser feita numa função (function)
        e essa função deve chamar outra função onde se guarda os dados no ficheiro de texto
        (o ficheiro deve ter extensão "txt");
    3)  escrever uma função para mostrar os dados que estão no array,
        mas só se o utilizador pretender isso;
    4)  escrever uma outra função só para ler os dados do ficheiro e mostrar no ecrã.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_CIDADES 100

// Função para gravar os dados no ficheiro
void gravar_dados_no_ficheiro(char nome_ficheiro[], char cidades[][100], float temperaturas[], int num_cidades) {
    FILE *ficheiro = fopen(nome_ficheiro, "w");
    if (ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro.\n");
        return;
    }
    
    for (int i = 0; i < num_cidades; i++) {
        fprintf(ficheiro, "%s %.2f\n", cidades[i], temperaturas[i]);
    }
    
    fclose(ficheiro);
}

// Função para recolher dados das cidades e temperaturas
void recolher_dados(char cidades[][100], float temperaturas[], int num_cidades, char nome_ficheiro[]) {
    for (int i = 0; i < num_cidades; i++) {
        printf("Introduza o nome da cidade %d: ", i + 1);
        scanf("%s", cidades[i]);

        printf("Introduza a temperatura da cidade %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }
    
    // Chama a função para gravar os dados no ficheiro
    gravar_dados_no_ficheiro(nome_ficheiro, cidades, temperaturas, num_cidades);
}

// Função para mostrar os dados guardados no array
void mostrar_dados_no_array(char cidades[][100], float temperaturas[], int num_cidades) {
    for (int i = 0; i < num_cidades; i++) {
        printf("Cidade: %s, Temperatura: %.2f\n", cidades[i], temperaturas[i]);
    }
}

// Função para ler os dados do ficheiro e mostrar no ecrã
void ler_dados_do_ficheiro(char nome_ficheiro[]) {
    FILE *ficheiro = fopen(nome_ficheiro, "r");
    if (ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro.\n");
        return;
    }

    char nome_cidade[100];
    float temperatura;
    printf("\nDados guardados no ficheiro '%s':\n", nome_ficheiro);
    while (fscanf(ficheiro, "%s %f", nome_cidade, &temperatura) != EOF) {
        printf("Cidade: %s, Temperatura: %.2f\n", nome_cidade, temperatura);
    }

    fclose(ficheiro);
}

int main() {
    char nome_ficheiro[100];
    char cidades[MAX_CIDADES][100];
    float temperaturas[MAX_CIDADES];
    int num_cidades;
    int opcao;
    
    // Pedir o nome do ficheiro
    printf("Introduza o nome do ficheiro a criar (com extensão .txt): ");
    scanf("%s", nome_ficheiro);

    // Pedir o número de cidades
    printf("Introduza o número total de cidades: ");
    scanf("%d", &num_cidades);

    // Recolher os dados das cidades e temperaturas
    recolher_dados(cidades, temperaturas, num_cidades, nome_ficheiro);

    // Perguntar se o utilizador deseja ver os dados do array
    printf("Deseja ver os dados armazenados no array? (1 = Sim, 0 = Não): ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        mostrar_dados_no_array(cidades, temperaturas, num_cidades);
    }

    // Ler os dados do ficheiro e mostrá-los no ecrã
    ler_dados_do_ficheiro(nome_ficheiro);

    return 0;
}
