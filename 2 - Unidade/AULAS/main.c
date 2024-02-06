#include <stdio.h>
#include <stdlib.h>
#include "aluno.c"



int main(void){

    Aluno *aluno;
    aluno = recebe_dados();
    imprimir(aluno);


    liberar(aluno);

    return 0;
}