#include <stdio.h>

int f (int mat [3][3]) {
    return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
    mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
    [0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}
int main ( void ) {
    int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
    int de = f ( m ) ;
    printf (" Resultado = \t %d", de ) ;
    return 0;
}


// Primeiramente, uma função chamada f é definida para retornar um valor inteiro resultante de operações em uma matriz 3x3, a qual é passada como parâmetro para a função f. 
//Em cada linha e coluna dessa matriz, valores inteiros são inseridos. Em seguida, são realizadas algumas operações matemáticas, resultando em um retorno de -5.