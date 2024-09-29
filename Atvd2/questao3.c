#include <stdio.h>

int potencia(int k, int n) {

  if (n == 0) {
    return 1;
  }

  return k * potencia(k, n - 1);
}

int main() {
  int k, n;

  printf("Digite os valores de k e  n: ");
  scanf("%d %d", &k, &n);
  ;

  printf("O resultado de %d^%d é: %d\n", k, n, potencia(k, n));

  return 0;
}
