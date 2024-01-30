#include <stdio.h>
#include <stdlib.h>

//uma letra
int main(void){
    //Cria a arquivo: entrada.txt no modo texto "t"
    FILE *arquivo;
    arquivo = fopen("Entrada.txt", "rt");
    int c;
    if(arquivo == NULL){
        printf("Erro de abertura de arquivo! \n");
        exit(1);
    }
    else{
        printf("O arquivo foi criado. !\n");
    }
    c = fgetc(arquivo);
    printf("%c\n", c);
    
    if(fclose(arquivo)){
        printf("Arquivo fechado");
    }

    fclose(arquivo); //fechar o arquivo!
    

    return 0;
}