#include <stdio.h>
#include <stdlib.h>

typedef struct Loja{
    char nome_da_fruta[20];
    float preco;
}frutas;

int main(void){
    int op;
    frutas loja;
    FILE *arquivo_frutas = fopen("frutas.txt","w");

    if(arquivo_frutas == NULL){
        printf("Erro na abertura de arquivo!");
        exit(1);
    }

    printf("-------- CADASTRAR AS FRUTAS NO SISTEMA --------\n");
    do{
        printf("Digite o nome da fruta: ");
        scanf("%s",loja.nome_da_fruta);
        
        printf("Digite o preço da fruta: ");
        scanf("%f",&loja.preco);

        fprintf(arquivo_frutas,"----------------\nNome da fruta: %s \n Preço: %.2f \n",loja.nome_da_fruta,loja.preco);

        printf("Deseja continuar cadastrando (1-SIM/2-NAO): ");
        scanf("%d",&op);
    }while (op != 2);

    printf("Cadastrado com sucesso!");

    fclose(arquivo_frutas);


    return 0;
}