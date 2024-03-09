#include "atv1.h"
#include <stdlib.h>
#include <stdio.h>



typedef struct lista{
    int info;
    struct lista *proxima_elemento;
}Lista;

Lista* cria_lista(void){
    return NULL;
}


/*Inserção */
Lista *insere_elemento(Lista* lista, int valor){
    //aloca novo nó da lista encadeado
    Lista * novo_no = (Lista*) malloc(sizeof(Lista));
    if(novo_no == NULL){
        exit(1);
    }
    //adiciona valor ao novo nó no campo info
    novo_no->info = valor;
    //coloca o novo nó na  lista
    novo_no->proxima_elemento = lista;

    return novo_no;
}

void imprimir_lista(Lista *lista){
    Lista * contador;
    for(contador = lista; contador != NULL; contador = contador->proxima_elemento){
        printf("%d\n", contador->info);
    }
}

int maiores_que(Lista *lista, int valor){
    int contador = 0;
    Lista *contador_lista;
    for(contador_lista = lista; contador_lista != NULL; contador_lista = contador_lista->proxima_elemento){
        if(contador_lista->info > valor){
            contador++;
        }
    }
    return contador;
}