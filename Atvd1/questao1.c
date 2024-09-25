#include <stdio.h>

int trocavalores(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    printf("numeros alterados dentro da função: %d %d\n", a, b);
    
}
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    printf("\n--- numero sem alteração ---\n");
    printf("%d %d\n", num1, num2);
    
    printf("--- Alterando os valores ---\n");
    trocavalores(num1, num2);

    
    printf("Valores alterados no main: %d %d\n", num1, num2);

}