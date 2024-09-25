#include <stdio.h>

int somarDiagonal(int matriz[][3], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += matriz[i][i];

    }
    return soma;
}
int main(){
    int matriz[3][3], n = 3;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);    
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int soma = somarDiagonal(matriz, n);
    printf("Soma das diagonais: %d\n", soma);
}
