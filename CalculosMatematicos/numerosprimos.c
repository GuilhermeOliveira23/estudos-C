#include <stdio.h>
#include <stdbool.h>
void verificar_se_eh_primo(int n) {
    // Números menores ou iguais a 1 não são primos.
    if (n <= 1) {
        printf("O numero %d nao eh primo.\n", n);
        return; // Encerra a função aqui.
    }

    bool eh_primo = true;
    // O laço verifica divisores de 2 até a raiz quadrada de n.
    for (int i = 2; i * i <= n; i++) {
        // Se encontrar um divisor, o número não é primo.
        if (n % i == 0) {
            eh_primo = false;
            break; // Encerra o laço, pois já sabemos que não é primo.
        }
    }

    // Imprime o resultado final APÓS o laço ter terminado.
    if (eh_primo) {
        printf("O numero %d eh primo!\n", n);
    } else {
        printf("O numero %d nao eh primo.\n", n);
    }
}


int main(){
int n;
printf("Verifique se o numero eh primo: ");
scanf("%d", &n);
verificar_se_eh_primo(n);
return 0;
}