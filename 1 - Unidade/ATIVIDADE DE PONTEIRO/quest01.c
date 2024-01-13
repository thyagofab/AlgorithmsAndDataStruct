#include <stdio.h>

int main(){
    int x,y,*p;
    y=0;
    p=&y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p)+=x;
}
 
/*O valores que vão retornar em x,y e p são respectivamente y = 4 e x = 3 p = 0x7fffca03739c ele volta o endereço de y*/