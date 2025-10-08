#include <stdio.h>
int main(){
    FILE *arquivo = fopen ("dados.txt", "a"); // Modo de anexar
    char linha[100];
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(arquivo, "Profissão: Engenharia\n");
    fclose(arquivo);
    printf("Novo dado adicionado ao arquivo!\n");
    return 0;
}