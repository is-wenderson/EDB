#include <stdio.h>

// Função para realizar a busca sequencial
int busca_sequencial(int v[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (v[i] == chave) {
            return i;  // Retorna o índice onde o valor foi encontrado
        }
    }
    return -1;  // Retorna -1 se o valor não for encontrado
}

int main() {
    int n, chave, posicao;

    printf("Tamanho da lista: ");
    scanf("%d", &n);
    int v[n];


    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &chave);
    posicao = busca_sequencial(v, n, chave);

    if (posicao != -1) {
        printf("Valor está na posição: %d\n", posicao);
    } else {
        printf("Valor não encontrado na lista.\n");
    }

    return 0;
}
