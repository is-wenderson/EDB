// Quicksort

#include <stdio.h>

void troca(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particiona(int v[], int inicio, int fim)
{
    int pivo = v[fim];
    int i = (inicio - 1);

    for(int j = inicio; j <= fim - 1; j++){
        if(v[j] <= pivo){
            i++;
            troca(&v[i], &v[j]);
        }
    }
    
    troca(&v[i + 1], &v[fim]);
    
    return (i + 1);
}

void quick_sort(int v[], int inicio, int fim)
{
    if(inicio < fim){
        int indice_pivo = particiona(v, inicio, fim);

        quick_sort(v, inicio, indice_pivo - 1);
        quick_sort(v, indice_pivo + 1, fim);
    }
}

void exibe_vetor(int v[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int v[] = {12, 9, 10, 13, 11, 14}, n = 6;
    
    printf("vetor de entrada: \n");
    exibe_vetor(v, n);

    quick_sort(v, 0, n - 1);

    printf("vetor ordenado: \n");
    exibe_vetor(v, n);
    
    return 0;
}
