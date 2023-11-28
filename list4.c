#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    printf("Digite um número:");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);

    printf("resultado da soma: %d", soma(a, b));
}
