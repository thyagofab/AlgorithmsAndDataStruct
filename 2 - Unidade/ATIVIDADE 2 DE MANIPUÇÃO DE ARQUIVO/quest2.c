#include <stdio.h>
#include <stdlib.h>

typedef struct Turma{
    char nome[20];
    float notas[3];
    float media;
}alunos;


int main(void){
    int total;
    FILE *arquivo_dados2 = fopen("arquivos_dados2.txt","w");
    if(arquivo_dados2 ==NULL){
        printf("ERRO DE CRIAR O ARQUIVO\n");
        exit(1);
    }
    printf("Cadastramento de alunos\n ");
    printf("Digite o total de alunos: ");
    scanf("%d",&total);
    
    alunos turma[total];

    for(int i = 0; i < total; i++){

        printf("_________________%d______________\n",i+1);
        printf("Digite o nome do aluno: ");
        scanf("%s", turma[i].nome);

        printf("Digite a primeira nota: ");
        scanf("%f", &turma[i].notas[0]);

        printf("Digite a segunda nota: ");
        scanf("%f", &turma[i].notas[1]);

        printf("Digite a terceira nota: ");
        scanf("%f", &turma[i].notas[2]);
        
        turma[i].media = (turma[i].notas[0] + turma[i].notas[1] + turma[i].notas[2])/3;
        
        fprintf(arquivo_dados2,"Aluno %d  \n Nome %s \n Notas: %.2f %.2f %.2f \n Media: %.2f\n",i+1,turma[i].nome,turma[i].notas[0],turma[i].notas[1],turma[i].notas[2],turma[i].media);
    }

    printf("Registrados com sucesso!\n");

    fclose(arquivo_dados2);

    return 0;
}