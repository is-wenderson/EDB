#include <stdio.h>

void merge(int v[], int inicio, int meio, int fim) {

  // a função merge é criada para que seja feito a verificação de qual o menor
  // valor entre dois vetores e assim, os valores sejam ordenados. Pode-se
  // perceber que o vetor é dividido em dois, do inicio até o meio, e do meio
  // até o fim.
  int i, j, k;
  int n1 = meio - inicio + 1;
  int n2 = fim - meio;

  // aqui são criados dos vetores para herdar os valores do vetor principal,
  // onde n1 é do inicio ao meio, e o n2 é do meio até o fim.
  int v1[n1], v2[n2];

  for (i = 0; i < n1; i++)
    v1[i] = v[inicio + i];
  for (j = 0; j < n2; j++)
    v2[j] = v[meio + 1 + j];

  // nessa etapa é realizada a comparação dos valores do vetor 1 e 2, e assim, é feita a ordenação. Utilizando a condicional if para realizar os testes e ver se um valor é maior que o outro. Assim, após a verificação o valor é ordenado de forma crescente.
  i = 0;
  j = 0;
  k = inicio;
  while (i < n1 && j < n2) {
    if (v1[i] <= v2[j]) {
      v[k] = v1[i];
      i++;
    } else {
      v[k] = v2[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    v[k] = v1[i];
    i++;
    k++;
  }

  while (j < n2) {
    v[k] = v2[j];
    j++;
    k++;
  }
}

// a função margesort recebe um vetor, o inicio e o fim do vetor
void merge_sort(int v[], int inicio, int fim) {

  // essa condição serve parar a recursão caso o vetor tenha apenas um elemento
  if (inicio < fim) {
    // cada vez que a função é chamada, o meio serve para dividir o vetor em
    // duas partes e conseguir calcula-las de forma recursiva, assim, podendo
    // dividir o vetor jogar na função merge para que seja feito a verificação
    // dos valores e, consequentemente a ordenação dos valores do vetor atráves
    // do merge.
    int meio = inicio + (fim - inicio) / 2;

    // logo, a função marge_sorte qubra o vetor em duas partes, utilizando a
    // função merge para que seja feito a ordenação dos valores do vetor.
    merge_sort(v, inicio, meio);
    merge_sort(v, meio + 1, fim);
    // Dessa forma, a função merge_sort é chamada duas vezes, uma para cada
    // parte do vetor. Como consiste nesse modulo de ordenação, onde o vetor é
    // dividido em duas partes que são comparadas e ordenadas entre si, depois
    // todas são realocadas dentro do vetor original.
    merge(v, inicio, meio, fim);
  }
}


//função utilizada para mostrar os novos valores do vetor, pode-se perceber que a funçãpo só é chamada após o a função merge_sort, onde os valores são ordenados.
void exibe_vetor(int v[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
}

int main() {
  // coletar os valores de forma dinamica para testar outras possíveis condições
  int tamanho;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  int v[tamanho];

  // receber valores para ordenar usando o método mergesort
  printf("vetor de entrada: \n");
  for (int i = 0; i < tamanho; i++) {
    printf("digite o valor %d: ", i);
    scanf("%d", &v[i]);
  }

  merge_sort(v, 0, tamanho - 1);

  printf("vetor ordenado: \n");
  exibe_vetor(v, tamanho);

  return 0;
}