#include <stdio.h>
#include <stdlib.h>

typedef struct dado{
    char nome[80];
    char disciplina[20];
    int matricula;
    float nota[3];
    float media;
}Turma;


void prencher(int n, Turma **aluno){
    
    for (int i = 0; i < n; i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i]->nome);
        printf("Digite a disciplina: ");
        scanf("%s", aluno[i]->disciplina);
        aluno[i]->matricula = i + 1;
    }
}


void lanca_notas(int n, Turma **aluno){
    for (int i = 0; i < n; i++){
        printf("-----------------ALUNO %d---------------\n", i);
        printf("Nome do aluno %s", aluno[i] ->nome);
        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[i]->nota[0]);
        printf("Digite a segunda nota: ");
        scanf("%f", &aluno[i]->nota[1]);
        printf("Digite a terceira nota: ");
        scanf("%f", &aluno[i]->nota[2]);
        aluno[i]->media = (aluno[i]->nota[0] + aluno[i]->nota[1] + aluno[i]->nota[2])/3;
        printf("-----------------------------------\n");
        printf("\n");
    }
}



void imprimie_tudo(int n, Turma **aluno){

    for (int i = 0; i < n; i++){
        printf("-----------------------------------\n");
        printf("Nome: %s\n", aluno[i]->nome);
        printf("Disciplina: %s\n", aluno[i]->disciplina);
        printf("Matricula: %d\n", aluno[i]->matricula);
        printf("Nota 1: %f\n", aluno[i]->nota[0]);
        printf("Nota 2: %f\n", aluno[i]->nota[1]);
        printf("Nota 3: %f\n", aluno[i]->nota[2]);
        printf("Media: %f\n", aluno[i]->media);
        printf("-----------------------------------\n");
        printf("\n");
    }
}


void imprimie_turnma_aprovada(int n, Turma **aluno){

    for (int i = 0; i < n; i++){
        if (aluno[i]->media >= 7){
            printf("-----------------------------------\n");
            printf("Nome: %s\n", aluno[i]->nome);
            printf("Disciplina: %s\n", aluno[i]->disciplina);
            printf("Matricula: %d\n", aluno[i]->matricula);
            printf("Nota 1: %.2f\n", aluno[i]->nota[0]);
            printf("Nota 2: %.2f\n", aluno[i]->nota[1]);
            printf("Nota 3: %.2f\n", aluno[i]->nota[2]);
            printf("Media: %.2f\n", aluno[i]->media);
            printf("-----------------------------------\n");
            printf("\n");
        }
    }
}


int main(void){
    int op;
    int tamanho_da_turma;
    
    printf("Digite o total de aluno para registrar: ");
    scanf("%d",&tamanho_da_turma);

    Turma **aluno = malloc(tamanho_da_turma*sizeof(Turma));
    
    for (int i = 0; i < tamanho_da_turma; i++){
        aluno[i] =  malloc(sizeof(Turma));
        if (aluno[i] == NULL)
        {
            printf("ERRO DE ALOCAÇÃO DE MEMORIA\n");
            exit(1);
        }
    }
    do{

  
        printf("----------MENU----------\n");
        printf("1 - REGISTRAR OS ALUNOS \n");
        printf("2 - REGISTRAR AS NOTAS\n");
        printf("3 - IMPRIMIR AS INFORMACOES DO GERAL\n");
        printf("4 - IMPRIMIR A LISTA DOS APROVADOS \n");
        printf("5 - SAIR \n");
        printf("---------------------------\n");
        
        printf("DIGITE A OPÇÃO: ");
        scanf("%d", &op);
        
        switch(op){
            case 1:
            prencher(tamanho_da_turma, aluno);
            break;

            case 2:
            lanca_notas(tamanho_da_turma, aluno);
            break;

            case 3:
            imprimie_tudo(tamanho_da_turma, aluno);
            break;

            case 4:
            imprimie_turnma_aprovada(tamanho_da_turma, aluno);
            break;

            default:
            printf("NAO EXISTE OPCAO!!! \n");
            break;
        }
    }wilhe(op != 5);

        free(aluno);
        for (int i = 0; i < tamanho_da_turma; i++){
            free(aluno[i]);
        }


}