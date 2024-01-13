#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome [20]; //20 bytes
    int idade; // 4 bytes
    int mat; // 4 bytes
    char email[50];   //50 bytes
};

void preenche(struct aluno *estudante){ //nao vai me retornar nada, pois só vai prencheer os printf.. 
    printf("digite o nome do aluno: ");
    scanf("%[^\n]",estudante ->nome);

    printf("digite a idade: ");
    scanf("%d",&estudante -> idade);

    printf("digite a matricula: ");
    scanf("%d",&estudante -> mat);

    printf("digite o email: ");
    scanf(" %[^\n]",estudante -> email);

}

void imprimir (struct aluno *estudante){
    printf("nome: %s \n Idade: %d\n  Matricula:  %d \n Email: %s", estudante -> nome, estudante -> idade, estudante -> mat, estudante -> email);

}




//alocação dinâmica de struct pois a variável agora é um ponteiro

int main(){
    struct aluno *estudante = (struct aluno*) malloc (sizeof(struct aluno));

    if (estudante == NULL){
        exit(1);
    }

    preenche (estudante);

    imprimir(estudante);

    free(estudante);


   return 0; 
}


