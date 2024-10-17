// Quicksort

#include <stdio.h>

void troca(int* a, int* b)
//função de troca para inverter a posição dos da lista
{
    int temp = *a;
    *a = *b;
    *b = temp;
    //troca as posições dos elementos da lista
}

int particiona(int v[], int inicio, int fim)
{
    int pivo = v[fim]; //seleciona o elemento que será o pivo, ou seja, o ultimo elemento da lista
    int i = (inicio - 1); //serve para percorrer a lista e comparar os elementos com o pivo

    for(int j = inicio; j <= fim - 1; j++){
        if(v[j] <= pivo){
            i++;
            troca(&v[i], &v[j]); //se o elemento for menor que o pivo, ele é trocado com o elemento na posição i
        }
    }

    troca(&v[i + 1], &v[fim]); //troca o pivo com o elemento na posição i + 1

    return (i + 1);
}

void quick_sort(int v[], int inicio, int fim)
{
    
    if(inicio < fim){
        //dividi a lista para poder ser feita a comparação com os demais elementos, o indice pívo serve para comparar o elemento do meio com os demais elementos da lista
        int indice_pivo = particiona(v, inicio, fim);
        //verifica os valores menores que o pivo e os maiores que o pivo
        quick_sort(v, inicio, indice_pivo - 1); //chamada recursiva para a esquerda
        quick_sort(v, indice_pivo + 1, fim); //chamada recursiva para a direita
    }    
}

void exibe_vetor(int v[], int n)
{ //função para exibir o valor ordenado
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