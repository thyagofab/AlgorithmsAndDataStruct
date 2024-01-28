#include <stdio.h>
#include <stdlib.h>

typedef struct Estrutura
{
    float base;
    float altura;
    float diamentro;
} estrutura;

estrutura ret_Circunscrito(estrutura *p, estrutura *h)
{
    estrutura maior;

    maior.altura = p->diamentro;
    maior.base = h->altura;

    return maior;
}

estrutura circ_Interno(estrutura *p)
{
    estrutura circulo;

    if (p->base / 2 < p->altura / 2)
    {
        circulo.diamentro = p->base / 2;
    }
    else
    {
        circulo.diamentro = p->altura / 2;
    }

    return circulo;
}

int main(void)
{
    estrutura *circ = malloc(sizeof(estrutura));
    estrutura *ret = malloc(sizeof(estrutura));
    if (circ == NULL || ret == NULL)
    {
        exit(1);
    }

    int op = 0;
    int validor = 0;

    do
    {
        printf("----------MENU----------\n");
        printf("1 - REGISTRAR OS DADOS CIRCULO INTERNO \n");
        printf("2 - REGISTRAR OS DADOS CIRCUNSCRITO\n");
        printf("3 - VER O MAIOR RETANGULO CIRCUNSESCRITO E MAIOR CIRCULO INTERNO\n");
        printf("4 - SAIR \n");
        printf("---------------------------\n");

        printf("DIGITE A OPÇÃO: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Digite o diametro do circulo: ");
            scanf(" %f", &circ->diamentro);

            printf("Digite a altura do retangulo: ");
            scanf(" %f", &ret->altura);
            validor++;

            break;
        case 2:
            printf("Digite a base do retangulo: ");
            scanf(" %f", &ret->base);

            printf("Digite a altura do retangulo: ");
            scanf(" %f", &ret->altura);
            validor++;
            break;

        case 3:
            if (validor == 2)
            {

                printf("O maior retângulo circunscrito:\n"
                       "Largura: %.2f\n"
                       "Altura: %.2f\n",
                       ret_Circunscrito(circ, ret).base, ret_Circunscrito(circ, ret).altura);

                printf("O maior círculo interno:\n"
                       "Raio: %.2f\n"
                       "Diâmetro: %.2f\n",
                       circ_Interno(ret).diamentro / 2, circ_Interno(ret).diamentro);
                validor = 0;
                printf("RESETADOS OS DADOS! \n");
                break;
            }
            else
            {
                printf("Falta algum dado!!\n");
                 break;
            }

        case 4:
            printf("Saindo...");
            break;

        default:
            printf("NAO EXISTE OPCAO!!! \n");
            break;
        }

    } while (op != 4);

    free(circ);
    free(ret);

    return 0;
}