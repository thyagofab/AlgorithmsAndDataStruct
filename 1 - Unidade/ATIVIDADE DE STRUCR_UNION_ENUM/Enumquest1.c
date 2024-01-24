#include <stdio.h>
#include <stdlib.h>

typedef enum genero{
    masculino,
    feminino
}Genero;
typedef struct pessoa{
    char nome[20];
    int idade;
    Genero genero_pessoa;  
}Pessoa;

void get_dados(Pessoa *pessoa){
    printf("informe o nome: ");
    scanf(" %s[^\n]", pessoa -> nome);
    printf("Informe a idade: ");
    scanf("%d", &pessoa -> idade);
    printf("Informe o genero: \n 0 - Masculino \n 1 - Feminino: ");
    scanf("%d", &pessoa -> genero_pessoa);
}

void imprimir_pessoa(Pessoa *pessoa){
    printf("Nome: %s \n Idade: %d \n Genero: %s \n ", pessoa -> nome, pessoa -> idade, pessoa -> genero_pessoa == masculino? 
    "Masculino":"Feminino");

}
int main(void){

    Pessoa *cidadao = malloc(sizeof(Pessoa));

    get_dados(cidadao);
    imprimir_pessoa(cidadao);

    free(cidadao);
    return 0;
}