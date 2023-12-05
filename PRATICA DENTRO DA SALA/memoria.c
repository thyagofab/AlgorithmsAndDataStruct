#include <stdio.h>
#include <stdlib.h>




int main(void){
    int tamanho_do_vetor= 20;
    char * nome = (char *) malloc(tamanho_do_vetor *sizeof(char));
    if(nome == NULL){
        printf("Erro: memoria insuficiente\n");
        exit(1);
    }

    printf("DIGITE SEU NOME: ");
    scanf("%[^\n]",nome);/*isso serve enquanto o usuario não apertar entrre o não para de pegar o texto e já diferente do %s se apertar espaço vai parar de parar de pegar a string que está digitando*/
    /*o proprio nome é o endereço.*/

    printf("ola %s \n", nome);

    free(nome);
    return 0;
}