#include <stdio.h>
#include <stdlib.h>


float resultado(char *gabarito, char *resposta_do_aluno, int total_de_questoes, float nota)
{
    int total_de_acertos = 0;

    for (int i = 0; i < total_de_questoes; i++)
    {
        if (gabarito[i] == resposta_do_aluno[i])
        {
            total_de_acertos++;
        }
        nota =(float)(10.0/total_de_questoes)*total_de_acertos;
    }
    return nota;
}

int main(void)
{


    int total_de_questoes;
    float aluno_aprovado = 0;
    float porcentagem_aprovacao;

    printf("DIGITE O TOTAL DE QUESTÕES: ");
    scanf("%d", &total_de_questoes);

    char *gabarito = (char *)malloc(total_de_questoes * sizeof(char));
    char *resposta_do_aluno = (char *)malloc(total_de_questoes * sizeof(char));
    float *aluno = (float *)malloc(10*sizeof(float*));


    if (gabarito == NULL && resposta_do_aluno == NULL && aluno == NULL)
    {
        printf("ERRO DE ALOCAÇÃO DE MEMORIA\n");
        exit(1);
    }

    printf("--------GABARITO DA PROVA----------\n");

    for (int i = 0; i < total_de_questoes; i++)
    {

        printf("DIGITE A RESPOSTA DA QUESTÃO %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }
    printf("------------------------------------\n");

    printf("\n");
    
    for (int i = 0; i < 10; i++)
    {

        printf("---------------ALUNO %d--------------\n",i+1);

        for (int i = 0; i < total_de_questoes; i++)
        {
            printf("DIGITE A RESPOSTA DO ALUNO PARA A QUESTÃO %d: ", i + 1);
            scanf(" %c", &resposta_do_aluno[i]);
        }


        aluno[i] = resultado(gabarito, resposta_do_aluno, total_de_questoes, aluno[i]);

    }

    printf("----------NOTAS DOS ALUNOS----------\n");
    for (int i = 0; i < 10; i++){
        printf("ALUNO %d: %.2f\n",1+i, aluno[i]);
    }
    printf("------------------------------------\n");

    for(int i = 0; i < 10; i++){
        if(aluno[i] >= 6.0){
            aluno_aprovado++;

        }
    }
    
    porcentagem_aprovacao = (aluno_aprovado / 10.0) * 100.0;

    printf("PORCENTAGEM DE APROVAÇÃO: %.2f%%\n", porcentagem_aprovacao);

    free(gabarito);
    free(resposta_do_aluno);
    free(aluno);
    return 0;
}