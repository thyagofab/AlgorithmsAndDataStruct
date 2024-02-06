#include <stdio.h>
#include <stdlib.h>


int main(void){
    int id,total;
    char nome[20];
    float salario;

    FILE *arquivo_dados;

    arquivo_dados = fopen("arquivo_dados.txt","aw");

    if(arquivo_dados == NULL){
        printf("Erro na abertura do arquivo");
        exit (1);
    }
    printf("Digite o Total de funcionarios para cadastrar: ");
    scanf("%d",&total);

    for(int i = 0; i <total; i++){
        printf("------------%d---------------\n",i+1);
        printf("Digite o nome: ");
        scanf("%s",nome);
        printf("Digite salario: ");
        scanf("%f",&salario);
        id = i+1;
        
        fprintf(arquivo_dados,"Dados da %d pessoa \n Nome %s \n Salario %.2f \n ID: %d\n",i+1, nome,salario,id);
        }

        printf("Cadastrados com sucesso!!");

        fclose(arquivo_dados);

    return 0;
}