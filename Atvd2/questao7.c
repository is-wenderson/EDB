#include <stdio.h>

int pell(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return 2 * pell(n - 1) + pell(n - 2);
}

int main() {
    int n;

    printf("Digite um número N: ");
    scanf("%d", &n);

    printf("O número de Pell é: %d\n", pell(n));

    return 0;
}
