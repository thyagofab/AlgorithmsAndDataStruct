#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}
int mutiplicao(int a, int b)
{
    return a * b;
}

int divisao(int a, int b)
{
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int))
{
    return (*operacao)(x, y);
}


int main(void)
{
    int escolha, resultado, numero1, numero2;
    printf("1-soma\n"
           "2-subtração\n"
           "3-multiplicação\n"
           "4-divisão\n");
    printf("Escolha uma operação:");
    scanf("%d", &escolha);

    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d", &numero1);

    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d", &numero2);

    switch (escolha)
    {
    case 1:
        resultado = calcula(numero1, numero2, soma);
        break;
    
    case 2:
        resultado = calcula(numero1,numero2,subtracao);
        break;
    
    case 3:
        resultado = calcula(numero1,numero2,mutiplicao);
        break;
    
    case 4:
        resultado = calcula(numero1,numero2,divisao);
        break;
    default:
        printf("OPERAÇÃO INVALIDA");
        break;
    }
    printf("Resultado: %d", resultado);
    return 0;
}