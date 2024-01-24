#include <stdio.h>
#include <stdlib.h>

typedef enum meses{
    JANEIRO,
    FEVERIERO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO ,
    NOVEMBRO,
    DEZEMBRO
}Mes;

typedef struct Data{
    int dia;
    int ano;
    Mes mes;
}data;

void prencher_dados(data *p){
    printf("Digite o dia: ");
    scanf("%d", &p -> dia);
    printf("Digite o numero do mês: ");
    scanf("%d", (int *) &p -> mes);
    printf("Digite o ano: ");
    scanf("%d", &p -> ano);

}

void imprimir(data *p){

	p -> mes <= OUTUBRO?printf("%d/0%d/%d", p -> dia, p -> mes, p -> ano):printf("%d/%d/%d", p -> dia, p -> mes, p -> ano);
	

}


int main(void){
    
    data * datas = malloc(sizeof(data));

    prencher_dados(datas);
    imprimir(datas);
    free(datas);

    return 0;
}