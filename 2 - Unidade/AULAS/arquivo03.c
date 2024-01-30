#include <stdio.h>
#include <stdlib.h>

//string 
int main(void){
    //Cria a arquivo: entrada.txt no modo texto "t"
    FILE *arquivo;
    arquivo = fopen("Entrada.txt", "rt");
    char c[20];
    if(arquivo == NULL){
        printf("Erro de abertura de arquivo! \n");
        exit(1);
    }
    else{
        printf("O arquivo foi criado. !\n");
    }

    fgets(c, 20, arquivo); // ler um linha do arquivo
    printf("%s\n", c);
    
    if(fclose(arquivo)){
        printf("Arquivo fechado");
    }

    fclose(arquivo); //fechar o arquivo!
    

    return 0;
}