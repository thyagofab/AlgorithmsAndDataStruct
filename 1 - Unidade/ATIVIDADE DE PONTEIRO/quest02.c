#include <stdio.h>

int main(){
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p = %p\tValor de *p = %d", p, *p);

}

/* a) acontece um  aviso de advertência.
b) Porque o ponteiro não foi apotando para nenhum endereço para ser apontando por endereço de "x" preciça do &.
c) Não, o programa não funciona.
d) codigo já está corrigido a cima
e) Com a correção do erro o codigo executa com sucesso, assim amostrando o endereço e conteúdo do ponteiro.
*/
