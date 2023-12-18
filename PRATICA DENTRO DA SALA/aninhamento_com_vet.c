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
    //vetor de disciplina
    disciplina *materias;// forma dinamica
} Aluno;


int main(void){
    //alocando memoria para variavel aluno

    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL){
        exit(1);
    }

    //aloca memoria para o vetor de 2 disciplinas

    aluno -> materias = (disciplina*) malloc(2*sizeof(disciplina));

    if (aluno -> materias == NULL){
        exit(1);
    }

    printf("Informe os dados do aluno: nome, idade e matricula \n");
    scanf(" %[^\n]", aluno -> nome );
    scanf("%d %d", &aluno->idade, &aluno->matricula);

    // cadastro das disciplinas


    for (int index = 0; index < 2; index++){
        printf("cadastro da disciplina %d", index+1);

        //lendo o nome da disciplina no index do vetor
        scanf(" %[^\n]", aluno->materias[index].nome);
        scanf("%d", &aluno->materias[index].codigo);
        scanf("%d", &aluno->materias[index].codigo);

    }






    return 0;
}
