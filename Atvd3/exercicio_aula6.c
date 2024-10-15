#include <stdio.h>

void ord_insercao(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = v[i];     // A variável 'chave' armazena o valor do elemento atual que está sendo comparado
        int j = i - 1;        // Começa no elemento anterior, para comparar com os elementos anteriores, deslocando-os se necessário
        while (j >= 0 && v[j] > chave) {  // Desloca os elementos maiores para a direita
            v[j + 1] = v[j];
            // percorre o 'j' para continuar verificando os elementos anteriores
            j = j - 1;
        }
        v[j + 1] = chave;  // Insere o valor na posição correta
    }
}

//função para mostrar a lista de valores de forma ordenada
void mostrar_lista(int v[], int n){
    ord_insercao(v, n);
    printf("lista ordenada:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}
int main() {
    //RECEBER OS VALORES DE FORMA DINAMICA
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    // Receber os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Mostrar o vetor ordenado
    mostrar_lista(v, n);

    return 0;
}
