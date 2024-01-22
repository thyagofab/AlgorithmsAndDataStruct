#include <stdio.h>
#include <stdlib.h>



//Estrutura para armazenar um documento por vez

typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;


typedef struct pessoa{
    char nome[20];
    int idade;
    Documentos doc;
}Dados;

void dados_pessoa(Dados *p){
    int op;
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p-> nome);
    printf("Informe a idade: \t");
    scanf("%d", &p-> idade);

    printf("Digite 1 para cpf / 0 para rg: ");
    scanf("%d", &op);


    if(op){ // vai ler como um bolleano, tudo de diferente de 0 é veradeiro, então digitando diferente de 0, cai nessa opção
        scanf(" %[^\n]", p -> doc.cpf);
    }

    else{
        scanf(" %[^\n]", p -> doc.rg);
    }
}


int main(void){

    Dados *pessoa = malloc(sizeof(pessoa));
    dados_pessoa(pessoa);
    printf("CPF = %s \n RG = %s", pessoa ->doc.cpf, pessoa->doc.rg);

    free(pessoa);
    return 0;
}