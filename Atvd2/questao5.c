#include <stdio.h>

int fatorial_duplo(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fatorial_duplo(n - 2);
    }
}

int main() {
    int n;

    printf("Digite um número ímpar: ");
    scanf("%d", &n);

    if (n % 2 == 1 && n > 0) {
        printf("O fatorial duplo de %d é: %d\n", n, fatorial_duplo(n));
    } else {
        printf("nsira um número ímpar positivo.\n");
    }

    return 0;
}
