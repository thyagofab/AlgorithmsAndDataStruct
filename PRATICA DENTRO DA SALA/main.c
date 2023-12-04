#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}
int mut(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a/b;
}

int calcula(int x, int y, int(*operacao)(int, int)){
    return(*operacao)(x,y);
}

int main(void){
    int resultado = calcula(5,3,sub);
    printf("Resultado subtração: %d\n", resultado);

    int resultado1 = calcula(5,3,soma);
    printf("Resultado da soma: %d\n", resultado1);

    int resultado2 = calcula(5,3,mut);
    printf("Resultado da multiplicação: %d\n", resultado2);

    int resultado3 = calcula(9,3,div);
    printf("Resultado da divisão: %d\n", resultado3);
    return 0;

}