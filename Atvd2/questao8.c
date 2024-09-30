#include <stdio.h>

int conta_digito(int N, int K) {
    if (N == 0) {
        return 0;
    }
    if (N % 10 == K) {
        return 1 + conta_digito(N / 10, K);
    }
    return conta_digito(N / 10, K);
}

int main() {
    int N, K;

    printf("Digite um número natural N e K: ");
    scanf("%d %d", &N, &K);
   

    printf("O dígito %d ocorre %d vezes no número %d.\n", K, conta_digito(N, K), N);

    return 0;
}
