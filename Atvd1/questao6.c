#include <stdio.h>
#include <stdlib.h>


int somatorio(int *n){
    int aux = 0;
    
    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
        aux += n[i];  // Calcula a soma dos números
    }
    return aux; 
}

int main() {
    int *n;
    int soma = 0;
    
    //o malloc serve para alocar memória dinamicamente
    n = (int *)malloc(5 * sizeof(int));
    
    int resultado = somatorio(n);
    printf("A soma dos números digitados é: %d\n", resultado);

    
    free(n);// libera a memória alocada
    return 0;
}
