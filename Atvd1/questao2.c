
#import <stdio.h>
//função para trocar os valores
void trocavalores(int *a, int *b) {
    
    int temp = *a; //variavel temporaria para armazenar o valor de a
    *a = *b; //a recebe o valor de b
    *b = temp; // b recebe o valor de a
}
int main(){
    int *num1, *num2;
    printf("Digite os valores: ");
    scanf("%d %d", num1, num2); 

    //valores antigos 
    printf("Antigos valores: %d %d", num1, num2);

    //função para trocar os valores
    trocavalores(num1, num2);
    printf("Valores trocado: %d %d", num1, num2);

}