#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha = 5 , coluna = 5;
    
    int **matriz = (int **) malloc(linha * sizeof(int *));

    for (int i = 0; i < linha; i++){
        matriz[i] = (int *) malloc(coluna * sizeof(int *));
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            matriz[i][j] = (i*5) +j;
        }
    }


    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linha; i++){
        free(matriz[i]);
    }

    free(matriz);
}