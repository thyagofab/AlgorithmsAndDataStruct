#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int tamanho_do_vetor= 20;
    char tamanho_do_nome;
    char * nome = (char *) malloc(tamanho_do_vetor *sizeof(char)); /*ele inicia com tamanho de 20 caracteres.*/
    if(nome == NULL){
        printf("Erro: memoria insuficiente\n");
        exit(1);
    }

    printf("DIGITE SEU NOME: ");
    scanf("%[^\n]",nome);/*isso serve enquanto o usuario não apertar entrre o não para de pegar o texto e já diferente do %s se apertar espaço vai parar de parar de pegar a string que está digitando*/
    /*o proprio nome é o endereço.*/

    /*colocando o tamanho de memoria que o nome usa. */

    /*erro nesse código procurar o motivo de não está alocando a memoria correta. */
    tamanho_do_nome = strlen(nome) + 1;

    nome = (char *) realloc(nome,tamanho_do_nome);

    if(nome == NULL){
      printf("Erro ao alocar memória\n");
      exit(1);
}

    printf("ola %s \n", nome);

    free(nome);
    return 0;
}