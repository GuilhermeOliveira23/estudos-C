#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *origem = fopen ("dados.txt", "r"); // leitura
    FILE *temp = fopen("temp.txt","w"); // escrita
    char linha[100];
    if(origem == NULL || temp == NULL){
        printf("Erro ao abrir os arquivos!\n");
        return 1;
    }
while(fgets(linha, sizeof(linha), origem)!= NULL){
    if(strstr(linha, "Idade:")!= NULL)
    fprintf(temp, "Idade: 26\n");
    else
    fprintf(temp,"%s", linha);
}
    fclose(origem);
    fclose(temp);
    remove("dados.txt");
    rename("temp.txt","dados.txt");
    printf("Alteração concluida com sucesso!\n");
    return 0;
}