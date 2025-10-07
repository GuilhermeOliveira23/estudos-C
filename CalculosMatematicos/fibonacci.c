#include <stdio.h>

void gerar_fibonacci(int n){
    int i;
    int a = 0, b = 1, proximo;
    int *ptr_a = &a, *ptr_b = &b, *ptr_proximo = &proximo;

    printf("Sequencia Fibonacci:\n");
    for(i=0; i<n; i++){
        if(i <= 1){
            *ptr_proximo = i;
        }
        else{
            *ptr_proximo = *ptr_a + *ptr_b;
            *ptr_a = *ptr_b;
            *ptr_b = *ptr_proximo;
        }
        printf("%d ", *ptr_proximo);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o numero de termos para a sequencia Fibonacci:");
    scanf("%d", &n);

    gerar_fibonacci(n);
    
    return 0;
}