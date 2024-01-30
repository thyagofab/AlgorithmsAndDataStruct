#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c;
    int nlinhas = 0;
    FILE *fp;
    //abre arquivo para leitura

    fp = fopen("arquivo2.tx", "w");
    if(fp == NULL){
        printf("Não foi possivel abrir arquivo. \n");
        return 1;
    }

    while((c = fgetc(fp)) != EOF){
        if(c == '\n'){
            nlinhas++;
        }
    }

    // fecja arquivo 
    fclose(fp);

    // exibe resultado na tela
    printf("Numero de linhas = %d\n", nlinhas);
    return 0;
}