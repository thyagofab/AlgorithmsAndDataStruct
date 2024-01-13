#include <stdio.h>



int main ( ) {
    int N_ant , N_prox , N , N_atual
    N_ant = N_atual =1;
    for( i =1 ,i <= N , i ++) {
    N_prox = N_ant + N_atual ;
    N_ant = N_atual ;
    N_atual = N_prox ;


    printf ("Fim do laco !\n") ;
    return
}


// primeiro erro identificado foi a falta de um virgula entre N_atual e N_ant para separar as variaveis ou até mesmo uma igualdade.
// Segundo erro foi a declaração do i dentro ou fora do laço de repetição, pois tem que declarar o i como um número inteiro
// terceiro erro foi a falta de fechar o chaves do laço de repetição for.
// quarto erro foi a falta de completar return 0; com um zero que serve para retornar caso codigo ocorra bem.
// quinto erro foi identificado uma falta de atribuição de valor para N, pois como o laço de repetição vai parar sem saber que i vai ser menor que N.
// sexto foi a comparação do stop do laço de repetição, pois não tem como I ser menor que N sendo I está recebendo +++.