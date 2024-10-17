#include <stdio.h>

extern int conta;

void exemplo_externo(void) {

    printf("A variavel 'conta' tem o valor: %d", conta);
}