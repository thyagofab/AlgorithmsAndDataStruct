#include <stdio.h>
#include <stdlib.h>

typedef struct  pessoa{
    char nome[20];
    int idade;

}pessoa;



void dados_pessoa( pessoa *p){

    printf("Informe o nome: \t");
    scanf(" %[^\n]", p-> nome);
    printf("Informe a idade: \t");
    scanf("%d", &p-> idade);
}




int main(){

    pessoa *pessoa = malloc(sizeof(pessoa));
    dados_pessoa(pessoa);

    return 0;


}