#import <stdio.h>
#import <stdlib.h>

struct Retangulo{
    float base;
    float altura;

};

int calcularArea(struct Retangulo *retangulo){
    float area = retangulo->base * retangulo->altura;
    return area;
}

int main(){
    struct Retangulo *retangulo = (struct Retangulo *)malloc(sizeof(struct Retangulo));
    
    printf("Digite a base em m: ");
    scanf("%f", &retangulo->base);
    printf("Digite a altura em m: ");
    scanf("%f", &retangulo->altura);

    float area = calcularArea(retangulo);
    printf("A area do retangulo eh: %.2fm\n", area);
    
}
