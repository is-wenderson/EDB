/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int fatorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

int main() {
    int n, k, resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    
    resultado = fatorial(n)/(fatorial(k)*fatorial(n-k));

    printf("O resultado da combinação é: %d", resultado);
    

    return 0;
}