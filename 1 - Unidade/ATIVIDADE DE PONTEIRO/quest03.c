#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    int *p1;
    int *p2 = &a; //aqui p2 aponta por endereço de "a"
    int *p3 = &c; // aqui p3 aponta por endereço de "c"
    p1 = p2; //"p1" e "p2" estão apontando para o mesmo endereço agora que é "a".
    *p2 = 10; // é atribuindo 10 ao endereço de "a".
    b = 20; // atribuindo 20 para "b".
    int **pp;// ponteiro para outro ponteiro
    pp = &p1; // "pp" aponta para o endereço de p1.
    *p3 = **pp; // "p3" recebe o valor de "p1" que é 10, pois pp está apontando para o endereço de "p1".
    int *p4 = &d; // "p4" aponta para o endereço de d.
    *p4 = b + (*p1)++; // o conteúdo de p4 recebe o valor de "b" + o conteúdo de "p1" que é 10 e depois é acrescentado 1 ao conteúdo de "p1".
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    return 0;
}

/*
os valores que vão sair é a = 11, b = 20, c = 10 e d = 30.
*/
