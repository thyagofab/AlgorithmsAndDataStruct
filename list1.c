#include <stdio.h>

int numb(int n, int vet[n])
{

    for (int i = 0; i < n; i++)
    {
        vet[i] = i;
    }

    return vet[n - 1];
}

void my_fuct(int n, int vet[])
{

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");
}

int main()
{

    int n;
    printf("DIGITE UM VALOR DE QUANTIDADE N DO TAMANHO QUE VOCÊ DESEJA: ");
    scanf("%d", &n);

    int principal_vet[n];

    numb(n, principal_vet);
    my_fuct(n, principal_vet);
}
