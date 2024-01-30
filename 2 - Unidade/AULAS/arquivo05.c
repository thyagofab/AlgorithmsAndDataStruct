#include <stdio.h>
#include <stdlib.h>

//string 
int main(void){
    //Cria a arquivo: entrada.txt no modo texto "w" write
    FILE *arquivo;
    arquivo = fopen("entrada_escrita.txt", "w");

    if(arquivo == NULL){
        printf("Erro de abertura de arquivo! \n");
        exit(1);
    }
    else{
        printf("O arquivo foi criado. !\n");
    }

    //fputc('A', arquivo); // serve para enviar uma caractere por arquivo
    //fputs("Hello world", arquivo); // passando um string por arquivo 
    fprintf(arquivo,"Meu texto");// passando um string por arquivo 
    
    if(fclose(arquivo)){
        printf("Arquivo fechado");
    }

    fclose(arquivo); //fechar o arquivo!
    

    return 0;
}