/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int potencia(int k, int n) {

  if (n == 0) {
    return 1;
  }else{
      return k * potencia(k, n - 1);
  }  
}

int main() {
  int k, n;

  printf("Digite os valores de k e  n: ");
  scanf("%d %d", &k, &n);
  ;

  printf("O resultado de %d^%d é: %d\n", k, n, potencia(k, n));

  return 0;
}