#include  <stdio.h>
#include <stdlib.h>



int main(void){
    int tamanho_do_vetor;
    float  total_de_pessoas_masculinas_que_nao_gostaram = 0;
    float total_de_pessoas_femininas_que_gostaram_do_produto = 0;
    float porcentagem_de_pessoas_do_sexo_feminino_que_gostaram = 0;
    float porcentagem_de_pessoas_do_sexo_masculino_que_nao_gostaram = 0;


    printf("DIGITE QUANTAS PESSOAS VOCê QUER PESQUISAR: ");
    scanf("%d",&tamanho_do_vetor);


    int *vetor_de_resposta_do_tipo_de_sexo = (int *) malloc(tamanho_do_vetor * sizeof(int));
    int *vetor_de_opinioes = (int *) malloc(tamanho_do_vetor *sizeof(int));

    if(vetor_de_resposta_do_tipo_de_sexo == NULL && vetor_de_opinioes == NULL){
        printf("ERRO DE LOCAÇÃO DE MEMORIA\n");
        exit(1);
    }


    for (int i = 0; i < tamanho_do_vetor; i++){
        printf("DIGITE O SEXO DA PESSOA %d -> "
        "1- Masculino  2- Feminino: ",i+1);
        scanf("%d",&vetor_de_resposta_do_tipo_de_sexo[i]);

        printf("DIGITE A OPINIAO SOBRE PRODUTO %d -> "
        "1 - GOSTOU  2 - NÃO GOSTOU: ",i+1);
        scanf("%d",&vetor_de_opinioes[i]);
    }




    for (int i = 0; i < tamanho_do_vetor; i++){

        if(vetor_de_resposta_do_tipo_de_sexo[i] == 2 && vetor_de_opinioes[i] == 1){
            total_de_pessoas_femininas_que_gostaram_do_produto++;
        }

        else if(vetor_de_resposta_do_tipo_de_sexo[i] == 1 && vetor_de_opinioes[i] == 2){
            total_de_pessoas_masculinas_que_nao_gostaram++;

        }
    }



    porcentagem_de_pessoas_do_sexo_feminino_que_gostaram = (total_de_pessoas_femininas_que_gostaram_do_produto / tamanho_do_vetor) * 100;
    porcentagem_de_pessoas_do_sexo_masculino_que_nao_gostaram = (total_de_pessoas_masculinas_que_nao_gostaram / tamanho_do_vetor) * 100;

    printf("O TOTAL DE PESSOAS QUE RESPONDERAM A PESQUISA FOI: %d\n",tamanho_do_vetor);
    printf("A PROCENTAGEM DE PESSOAS DO SEXO FEMININO QUE GOSTARAM DO PRODUTO FOI: %.2f PORCENTO\n", porcentagem_de_pessoas_do_sexo_feminino_que_gostaram);
    printf("A PROCENTAGEM DE PESSOAS DO SEXO MASCULINO QUE NÃO GOSTARAM DO PRODUTO FOI: %.2f PORCENTO\n", porcentagem_de_pessoas_do_sexo_masculino_que_nao_gostaram);

    free(vetor_de_resposta_do_tipo_de_sexo);
    free(vetor_de_opinioes);
    return 0;
    

}