#include <stdio.h>
int main(){
    FILE *arquivo = fopen ("dados.txt", "r"); // lê arquivo(modo leitura)
    char linha[100];
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    printf("Conteudo do arquivo:\n");
    while(fgets(linha, sizeof(linha),arquivo) != NULL){
        printf("%s", linha);
    }

    fclose(arquivo);
    printf("Arquivo criado e dados gravados com sucesso!\n");
    return 0;
}