#include <stdio.h>
#include <stdlib.h>


int main(void){
    FILE *arquivo;
    FILE *arquivo_de_saida;

    arquivo_de_saida = fopen("saida_q3.txt","rt");

    arquivo = fopen("Entrada_q3.txt", "W") ;

        if(arquivo == NULL && arquivo_de_saida == NULL){
        printf("Erro de abertura de arquivo! \n");
        exit(1);
    }

    fgets(c, 20, arquivo); // ler um linha do arquivo
    printf("%s\n", c);




    return 0;
}