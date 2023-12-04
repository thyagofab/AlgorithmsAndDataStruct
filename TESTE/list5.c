#include <stdio.h>


int main()
{
    int i;

    for (i = 1; i <= 100; i *= 100)
    {
        if (i == 30)
        {
            break;
        }
        else
        {
            printf("%2d\n", 2 * i); //vai entrar na condição else, pois o i não é igual a 30,  pois vai acabar valendo 100 e entra na codinção else e acaba sendo 
            // multiplicado por 2 e acaba assumindo um valor igual 200  e vai ser impresso e sair do laço.
        }
    }
    printf("Fim do laco !\n");
    return 0;
}
