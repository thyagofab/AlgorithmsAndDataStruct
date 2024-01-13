#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct servidor{
    char nome [20]; //20 bytes
    char cargo[20]; // 4 bytes
    int cpf; // 4 bytes
    char email[50];   //50 bytes
    int salario;
};

void preenche(struct servidor *servidor){ //nao vai me retornar nada, pois só vai prencheer os printf.. 
    printf("digite o nome do servidor: ");
    scanf(" %[ ^\n]",servidor ->nome);

    printf("digite a cargo: ");
    scanf(" %[ ^\n]",servidor -> cargo);

    printf("digite a cpf: ");
    scanf("%d",&servidor -> cpf);

    printf("digite o email: ");
    scanf(" %[ ^\n]",servidor -> email);

    printf("digite o salario: ");
    scanf("%d",&servidor -> salario);

}

void imprimir (struct servidor *servidor){
    printf("Nome: %s\n", servidor ->nome);
    printf("Cargo: %s\n", servidor ->cargo);
    printf("CPF:  %d\n", servidor ->cpf);
    printf("Email: %s\n", servidor ->email);
    printf("Salario: %d\n", servidor -> salario);

}




//alocação dinâmica de struct pois a variável agora é um ponteiro

int main(){
    struct servidor *servidor = (struct servidor*) malloc(sizeof(struct servidor));

    if (servidor == NULL){
        exit(1);
    }

    preenche (servidor);

    imprimir(servidor);

    free(servidor);


   return 0; 
}

