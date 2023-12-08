#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas = 3, colunas = 3, i, j;

    int **matriz = (int **) malloc(linhas*sizeof(int*));
    for (i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas *sizeof(int));
    }


    
}