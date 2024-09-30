#include <stdio.h>

int fatorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}
int superfatorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return fatorial(n) * superfatorial(n-1);
    }
}
int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

        printf("O fatorial duplo de %d é: %d\n", n, superfatorial(n));
    

    return 0;
}
