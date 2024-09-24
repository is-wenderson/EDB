#import <stdio.h>
#import <stdlib.h>


struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};
int receberDados(struct Pessoa *people){
    
    printf("Qual seu nome: \n");
    fgets(people->nome, sizeof(people->nome), stdin);
    printf("Qual sua idade: \n");
    scanf("%d", &people->idade);
    printf("Qual sua altura em m: \n");
    scanf("%f", &people->altura);
    return 0;
}
int main (){
    struct Pessoa *people = (struct Pessoa *)malloc(sizeof(struct Pessoa));;


    receberDados(people);
    printf("--------Dados da pessoa--------");
    printf("\nNome: %s", people->nome);
    printf("Idade: %d anos \n", people->idade);
    printf("Altura: %.2f metros\n", people->altura);
}
