#include <stdio.h>
#include <stdbool.h>

bool verificaPar(int n);
bool verificaImpar(int n);

bool verificaPar(int n) {
    if (n == 0) return true;
    return (n % 10) % 2 == 0 && verificaImpar(n / 10);
}

bool verificaImpar(int n) {
    if (n == 0) return true;
    return (n % 10) % 2 != 0 && verificaPar(n / 10);
}

int main() {
    int numero;
    scanf("%d", &numero);
    if (numero < 0) return 1;
    if (verificaPar(numero) || verificaImpar(numero))
        printf("Válido\n");
    else
        printf("Inválido\n");
    return 0;
}
