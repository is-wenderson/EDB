#import <stdio.h>
#import <stdlib.h>

int somatorio(int *n, int indice, int tamanho) {
    if (indice >= tamanho) {
        return 0;
    } else {
        // Chamada recursiva: soma o valor atual e o resultado da chamada com o próximo índice
        return n[indice] + somatorio(n, indice + 1, tamanho);
    }
}
int main(){
  int *n, tamanho;
  n = (int*)malloc(sizeof(int));
   scanf("%d", &tamanho);
  for(int i = 0; i < tamanho; i++){
    scanf("%d", &n[i]);
  }
  
  int calculo = somatorio(n, 0, tamanho);
  printf("%d", calculo);
}