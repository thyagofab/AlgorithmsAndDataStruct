#include <stdio.h>

int soma(int a, int b)
{
    int i = b;
    int soma = 0;

    if (a > b)
    {
        for (i; i <= a; i++)
        {
            soma += i;
        }
    }

    if (b > a)
    {
        for (i; i >= a; i--)
        {
            soma += i;
        }
    }
    return soma;
}

int main()
{
    int a, b;
    printf("Digite um número:");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);

    printf("Resultado da soma: %d", soma(a, b));
    return 0;
}
