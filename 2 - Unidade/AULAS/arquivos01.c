#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Cria a arquivo: entrada.txt no modo texto "t"
    FILE *arquivo;
    arquivo = fopen("Entrada.txt", "w");
    if(arquivo == NULL){
        printf("Erro de abertura de arquivo! \n");
        exit(1);
    }
    else{
        printf("O arquivo foi criado. !\n");
    }

    fclose(arquivo); //fechar o arquivo!
    

    return 0;
}