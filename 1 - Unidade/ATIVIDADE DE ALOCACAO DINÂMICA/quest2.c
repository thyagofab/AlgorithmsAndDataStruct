#include <stdio.h>
#include <stdlib.h>

#define ALUNOS 10

void resultado(char *gabarito, char **alunos, int total_de_questoes)
{
    float nota = 0;
    float acertos = 0;
    float aprovados = 0;

    printf("----------NOTAS DOS ALUNOS----------\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        nota = 0;
        acertos = 0;
        for (int j = 0; j < total_de_questoes; j++)
        {
            if (alunos[i][j] == gabarito[j])
            {
                acertos++;
            }
        }

        nota = acertos / total_de_questoes * 10;
        printf("ALUNO %d:  %.2f\n", i + 1, nota);

        if (nota >= 6.0)
        {
            aprovados++;
        }
    }

    float porcentagem_de_aprovados = (aprovados / ALUNOS) * 100;

    printf("PORCENTAGEM DE APROVADOS: %.2f %%", porcentagem_de_aprovados);
}

int main(void)
{

    int total_de_questoes;

    printf("DIGITE O TOTAL DE QUESTÕES: ");
    scanf("%d", &total_de_questoes);

    char *gabarito = (char *)malloc(total_de_questoes * sizeof(char));
    char **alunos = (char **)malloc(10 * sizeof(char *));

    for (int i = 0; i < 10; i++)
    {
        alunos[i] = (char *)malloc(total_de_questoes * sizeof(char));
        if (alunos[i] == NULL)
        {
            printf("ERRO DE ALOCAÇÃO DE MEMORIA\n");
            exit(1);
        }
    }

    if (gabarito == NULL)
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

    for (int i = 0; i < ALUNOS; i++)
    {

        printf("---------------ALUNO %d--------------\n", i + 1);

        for (int j = 0; j < total_de_questoes; j++)
        {
            printf("DIGITE A RESPOSTA DO ALUNO PARA A QUESTÃO %d: ", i + 1);
            scanf(" %c", &alunos[i][j]);
        }
    }


    resultado(gabarito, alunos, total_de_questoes);

    free(alunos);

    for (int i = 0; i < 10; i++)
    {
        free(alunos[i]);
    }
    free(gabarito);

    return 0;
}