#include <stdio.h>
#include <stdlib.h>

/*exemplo de ANINHAMENTO DE ESTRUTURAS */

typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;
}disciplina;


typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
    disciplina/*aqui tipo da variavel*/ materias; //aqui variavel; //aninhamento de estrutura disciplina na estrutura aluno. uma estrutura dentro da outra.
} aluno;


int main(void){

    aluno aluno;

    aluno.idade = 19;
    aluno.matricula = 123412112;
    aluno.materias.codigo = 6463; //acesando as outras variavel atraves do ponto.


    printf("%d, %d, %d \n", aluno.idade, aluno.matricula, aluno.materias.codigo);




    return 0;
}
