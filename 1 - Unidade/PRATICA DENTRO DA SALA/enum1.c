#include <stdio.h>

// MANEIRA DE DEFINIR CONSTANTES EM C
#define TRUE 0
#define FALSO 1

//Enumeração 
typedef enum bool{
    true,
    false
}Bool;


int main(void){
    Bool resposta;
    printf("Você gosta de algoritmo? \n 0 - True \n 1 - false \n");
    scanf("%d", &resposta);

    if (resposta == TRUE){
        printf("Boa sorte \n");
    }
    else if(resposta == FALSO){
        printf("que pena! \n");
    }

    return 0;
}