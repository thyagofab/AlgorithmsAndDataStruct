#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union SEXO{
    char Masculino[20];
    char Feminino[20];
}sexo;


typedef struct Pessoa{
    char nome[20];
    int idade;
    sexo sexy;
    int op;
}Dados;

void dados_pessoa(Dados *p){
    
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p-> nome);
    printf("Informe a idade: \t");
    scanf("%d", &p-> idade);

    printf("Digite 1 para Masculino / 0 para Feminino: ");
    scanf("%d", &p ->op);

    if(p ->op){ 
        strcpy(p->sexy.Masculino, "Masculino");
    }

    else{
        strcpy(p->sexy.Feminino, "Feminino");
    }

}


int main(void){

    Dados *pessoa = malloc(sizeof(pessoa));
    dados_pessoa(pessoa);

    printf("\n\nNome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);

    if(pessoa ->op){
        printf("Sexo: %s\n", pessoa->sexy.Masculino);
    }
    else{
        printf("Sexo: %s\n", pessoa->sexy.Feminino);
    }


    free(pessoa);
    return 0;
}