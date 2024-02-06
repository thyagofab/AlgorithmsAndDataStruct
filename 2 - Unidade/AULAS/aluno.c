// representa a TAD aluno;
#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno*)malloc(sizeof(Aluno));
    if(estudante == NULL){
        printf("Sem memoria");
        exit(1);
    }

    printf("Informe o nome: ");
    scanf(" %[^\n]",estudante->nome);

    printf("Informe a matricula: ");
    scanf("%d",&estudante->matricula);

    printf("Informe o IRA: ");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void imprimir(Aluno * alunos){
    printf("Nome: %s\n",alunos -> nome);
    printf("Matricula: %d\n", alunos -> matricula);
    printf("IRA: %f\n", alunos -> IRA);
}

void liberar(Aluno *p){
    free(p);
}
