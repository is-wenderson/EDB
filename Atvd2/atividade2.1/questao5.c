#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool verificar_palindromo(const char *palavra, int inicio, int fim) {
    if (inicio >= fim) {
        return true;
    }
    if (palavra[inicio] != palavra[fim]) {
        return false;
    }
    return verificar_palindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    if (verificar_palindromo(palavra, 0, tamanho - 1)) {
        printf("\"%s\" é palíndromo\n", palavra);
    } else {
        printf("\"%s\" não é palíndromo\n", palavra);
    }

    return 0;
}