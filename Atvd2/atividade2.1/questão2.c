/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int somarPares(int n) {

  if (n == 0) {
    return 0;
  }else{
      return n*2 + somarPares(n-1);
  }  
}

int main() {
  int n;

  printf("Digite o valor: ");
  scanf("%d", &n);
  

  printf("O resultado é: %d\n", somarPares(n));

  return 0;
}