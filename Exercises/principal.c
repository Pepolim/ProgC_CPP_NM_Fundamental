#include <stdio.h>

int conta;

extern void exemplo_externo();

int main() {

    conta = 10;
    exemplo_externo();

    return 0;
}

