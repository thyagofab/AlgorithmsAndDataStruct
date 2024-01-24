#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union tipo{
    char Alimento[20];
    char Bebida[20];
    char Eletronico[20];
} Tipo;


typedef struct Produto {
    char nome[20];
    float preco;
    Tipo tipo;
    int op;
} Mercadoria;

void Analise_de_produto(Mercadoria *p){

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", p -> nome);
    printf("Infome o preco do produto: ");
    scanf("%f", &p -> preco);
    
    printf("Digite 1 - para Alimento / 2 - para Bebida / 3 - para Eletronico: ");
    scanf("%d", &p ->op);

    switch(p -> op){
        case 1:
            strcpy(p->tipo.Alimento, "Alimento");
        break;
        case 2:
            strcpy(p->tipo.Bebida, "Bebida");
        break;
        case 3:
            strcpy(p->tipo.Eletronico, "Eletronico");
        break;
    }

}

int main(void){
    Mercadoria *produto = malloc(sizeof(Mercadoria));
    Analise_de_produto(produto);


    printf("-------INFORMAÇÃO DO PRODUTO-------\n")

    printf("Nome: %s\n", produto -> nome);

    printf("Preço do produto: %f\n", produto -> preco);


    switch(produto -> op){
        case 1:
            printf("Tipo do produto: %s", produto ->tipo.Alimento);
        break;
        case 2:
            printf("Tipo do produto: %s",produto ->tipo.Bebida);
        break;
        case 3:
            printf("Tipo do produto: %s",produto ->tipo.Eletronico);
        break;
    }

    free(produto);

    return 0;
}