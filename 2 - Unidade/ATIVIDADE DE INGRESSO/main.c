#include "ingresso.c"

int main(){
    int tamanho;

    printf("Qual o número de ingressos? ");
    scanf("%d", &tamanho);

    Ingresso *ingressos = (Ingresso*) malloc(sizeof(Ingresso) * tamanho);

    if(ingressos == NULL){
        printf("Erro na alocação!");
        exit(1);
    }
    
    preencher(ingressos, tamanho);
    imprimir(ingressos, tamanho);
    novo_valor(ingressos, tamanho);
    Preco_menorEmaior(ingressos, tamanho);

    free(ingressos);

    return 0;
}