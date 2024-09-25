#import <stdio.h>

int fibo(int n){
  if(n == 0){
    return 0;
  }else if (n == 1){
    return 1;
  }else{
    int resultado = fibo(n-1) + fibo(n-2);
    return resultado;
  }
  
}

int main(void){
  int n, resultado;

  scanf("%d", &n);
  
  resultado = fibo(n);
 
  for(int i = 0; n >= i; i++){
    printf("%d ", fibo(i));
  }

  printf("O N-esimo termo: F(%d) = %d", n, resultado);

  
}
