#include <stdio.h>

int busca_binaria(int v[], int n, int chave) {
    int inicio = 0; 
    int fim = n - 1;         

    // Enquanto houver elementos para procurar
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;  // Calcula o índice do meio

        if (v[meio] == chave) {
            return meio;  // Se o valor no meio for igual à chave, retorna o índice
        }
        else if (v[meio] < chave) {
            inicio = meio + 1;  // Se o valor da chave for maior, busca na metade superior
        }
        else {
            fim = meio - 1;     // Se o valor da chave for menor, busca na metade inferior
        }
    }

    return -1; 
}

int main() {
    int n, chave, posicao;

    printf("Tamanho da lista: ");
    scanf("%d", &n);
    int v[n];


    printf("Digite os elementos da lista:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &chave);

    posicao = busca_binaria(v, n, chave);
    
    if (posicao != -1) {
        printf("Valor está na posição: %d\n", posicao);
    } else {
        printf("Valor não encontrado na lista.\n");
    }

    return 0;
}
