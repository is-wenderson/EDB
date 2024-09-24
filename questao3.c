#include <stdio.h>

int somatorio(int n[], int a) {
  a = 0;
  printf("Digite 5 valores: \n");
  for (int soma = 0; soma < 5; soma++) {
    scanf("%d", &n[soma]);
    a += n[soma];
  }
  return a;
}
int main() {
  int n[5], a;

  int soma = somatorio(n, a);
  printf("A soma dos números é: %d", soma);
}
