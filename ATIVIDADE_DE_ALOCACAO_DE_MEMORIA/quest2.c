#include <stdio.h>
#include <stdlib.h>


int resultado(char *gabarito, char *resposta_do_aluno,int total_de_questoes){
    int total_de_acertos = 0;

    for (int i = 0; i < total_de_questoes; i++)
    {
        if (gabarito[i] == resposta_do_aluno[i])
        {
            total_de_acertos++;
        }
    }
    return total_de_acertos;
}



int main(void)
{
    int total_de_questoes;
    int total_de_acertos = 0;

    
    printf("DIGITE O TOTAL DE QUESTÕES: ");
    scanf("%d", &total_de_questoes);


    
    char *gabarito = (char *)malloc(total_de_questoes * sizeof(char));
    char **resposta_do_aluno = (char *)malloc(total_de_questoes * sizeof(char));

    if (gabarito == NULL && resposta_do_aluno == NULL)
    {
        printf("ERRO DE ALOCAÇÃO DE MEMORIA\n");
        exit(1);
    }

    for (int i = 0; i < total_de_questoes; i++) {

        printf("DIGITE A RESPOSTA DA QUESTÃO %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < total_de_questoes; i++) {
        printf("DIGITE A RESPOSTA DO ALUNO PARA A QUESTÃO %d: ", i + 1);
        scanf(" %c", &resposta_do_aluno[i]);
    }

    total_de_acertos = resultado(gabarito, resposta_do_aluno, total_de_questoes);

    printf("O TOTAL DE ACERTOS FOI: %d\n", total_de_acertos);

    free(gabarito);
    free(resposta_do_aluno);
    return 0;
}