#include <stdio.h>
#include "func.h"
#include <math.h>



int adicao(int n1, int n2){
    return n1+n2;
}

int subtracao(int n1, int n2){
    return n1 - n2;
}

int mutiplicacao(int n1, int n2){
    return n1*n2;
}

float divisao(int n1, int n2){
    return (float)n1 / n2;
}


float potenciacao(float n1, float n2){
    return pow(n1, n2);
}