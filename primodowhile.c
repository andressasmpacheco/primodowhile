#include <stdio.h>

int main() {
    int i, numero;
    do {
        printf("Informe um numero pra ver se e primo: ");
        scanf("%d", &numero);
    } while (numero <= 1);
    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            break;
        }
    }
    if (numero == i) {
        printf("Numero primo %d", numero);
    } else {
        printf("Numero nao primo %d", numero);
    }
}
