#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct professor{
    char nome [20]; //20 bytes
    int idade; // 4 bytes
    int mat; // 4 bytes
    char email[50];   //50 bytes
};

void preenche(struct professor *prof){ //nao vai me retornar nada, pois só vai prencheer os printf.. 
    printf("digite o nome do professor: ");
    scanf("%[^\n]",prof ->nome);

    printf("digite a idade: ");
    scanf("%d",&prof -> idade);

    printf("digite a matricula: ");
    scanf("%d",&prof -> mat);

    printf("digite o email: ");
    scanf(" %[^\n]",prof -> email);

}

void imprimir (struct professor *prof){
    printf("nome: %s \n Idade: %d\n  Matricula:  %d \n Email: %s", prof -> nome, prof -> idade, prof -> mat, prof -> email);

}




//alocação dinâmica de struct pois a variável agora é um ponteiro

int main(){
    struct professor *prof = (struct professor*) malloc (sizeof(struct professor));

    if (prof == NULL){
        exit(1);
    }

    preenche (prof);

    imprimir(prof);

    free(prof);


   return 0; 
}


