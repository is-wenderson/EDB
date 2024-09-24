#import <stdio.h>
#import <stdlib.h>


struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};

int main (){
    struct Pessoa *people = (struct Pessoa *)malloc(sizeof(struct Pessoa));

    printf("Qual seu nome: \n");
    fgets(people->nome, sizeof(people->nome), stdin);
    printf("Qual sua idade: \n");
    scanf("%d", &people->idade);
    printf("Qual sua altura: \n");
    scanf("%f", &people->altura);


    printf("--------Dados da pessoa--------\n");
    printf("\nNome: %s", people->nome);
    printf("Idade: %d\n", people->idade);
    printf("Altura: %.2f\n", people->altura);
}
