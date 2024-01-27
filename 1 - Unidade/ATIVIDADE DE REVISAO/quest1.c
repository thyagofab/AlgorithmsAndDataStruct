#include  <stdio.h>
#include <stdlib.h>

typedef struct Evento{
    float preco_do_ingresso;
    char local_do_evento[20];
    char atracao[20];
}evento;



void preencher (int index, evento *registrar){
    printf("Digite o local do evento: ");
    scanf(" %[^\n]", registrar[index].local_do_evento);
    printf("Digite atração do evento: ");
    scanf(" %[^\n]", registrar[index].atracao);
    printf("Digite o preço do ingresso: ");
    scanf("%f", &registrar[index].preco_do_ingresso );
}

void imprimir(int index, evento *registros){
    for (int i =0; i < index; i++){
        printf("EVENTO %d \n", i+1);
        
        printf("LOCAL DO EVENTO: %s \n", registros[i].local_do_evento);
        printf("ATRAÇÃO PRINCIPAL DO EVENTO: %s \n", registros[i].atracao);
        printf("PREÇO DO INGRESSO: %.2f \n", registros[i].preco_do_ingresso);
    }
}

void alterar_preco(int index, evento *registros){   
    printf("O evento que voce quer alterar o ingresso %s \n", registros[index-1].atracao);
    printf("ALTERAR PREÇO DO INGRESSO: ");
    scanf("%f", &registros[index-1].preco_do_ingresso);

    printf("ALTERADO COM SUCESSO O PREÇO!! \n");
}


void imprime_menor_maior_preco(int n, evento *registros) {
    float maior_valor = registros[0].preco_do_ingresso;
    float menor_valor = registros[0].preco_do_ingresso;

    for (int i = 1; i < n; i++) {
        if (maior_valor < registros[i].preco_do_ingresso) {
            maior_valor = registros[i].preco_do_ingresso;
        }

        if (menor_valor > registros[i].preco_do_ingresso) {
            menor_valor = registros[i].preco_do_ingresso;
        }
    }

    printf("Menor valor: %.2f\n", menor_valor);
    printf("Maior valor: %.2f\n", maior_valor);
}


int main(void){

    int op = 0;
    int total = 0;

    evento *registrar_evento = malloc(total*sizeof(evento));
    if (registrar_evento == NULL){
        exit(1);
    }

    do{
        int id;
        printf("----------MENU----------\n");
        printf("1 - REGISTRAR EVENTO \n");
        printf("2 - IMPRIMIR DADOS DO EVENTO \n");
        printf("3 - ALTERAR PREÇO DE UM EVENTO \n");
        printf("4 - VER O MAIOR OU MENOR VALOR DE INGRESSO DO EVENTO \n");
        printf("5 - SAIR \n");
        printf("---------------------------\n");
        
        printf("DIGITE A OPÇÃO: ");
        scanf("%d", &op);

        switch(op){
            case 1:
            registrar_evento = realloc(registrar_evento, (total + 1) * sizeof(evento));
            if (registrar_evento == NULL){
            exit(1);
            
            }

            preencher(total, registrar_evento);
            total++;
            break;

            case 2:
            imprimir(total, registrar_evento);
            break;

            case 3:
            printf("Digite o ID DO EVENTO: ");
            scanf("%d", &id);
            alterar_preco(id, registrar_evento);
            break;

            case 4:
            imprime_menor_maior_preco(total,registrar_evento);
            break;

            case 5:
            printf("Saindo...\n");
            break;

            default:
            printf("NAO EXISTE OPCAO!!! \n");
            break;
        }
    }while(op !=5);

    free(registrar_evento);
}
