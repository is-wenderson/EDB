#include <stdio.h>

//função para trocar os valores
void trocavalores(int *a, int *b) {
    
    printf("novos valores para a e b\n");
    scanf("%d %d", a, b);
    
}
int main(){
    int a = 10, b = 20;
    
    //valores antigos 
    printf("Antigos valores: %d %d\n", a, b);

    //função para trocar os valores
    trocavalores(&a, &b);
    printf("Valores trocado: %d %d", a, b);
    

}