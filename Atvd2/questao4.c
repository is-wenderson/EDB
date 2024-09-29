#include <stdio.h>

int multiplicacao(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + multiplicacao(a, b - 1);
    } else {
        return -multiplicacao(a, -b);
    }
}

int main() {
    int a, b;

    printf("Digite os valores de A e B: ");
    scanf("%d %d", &a, &b);

    printf("O resultado de %d * %d é: %d\n", a, b, multiplicacao(a, b));

    return 0;
}
