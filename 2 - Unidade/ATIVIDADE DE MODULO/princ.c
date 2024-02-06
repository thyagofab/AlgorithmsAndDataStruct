#include <stdio.h>
#include <stdlib.h>
#include "func.h"


int main(void){
    int num1, num2,op = 0;

    do{
        printf("----------MENU----------\n");
        printf("1 - SOMA \n");
        printf("2 - SUBSTRAÇÃO \n");
        printf("3 - MULTIPLICAÇÃO \n");
        printf("4 - DIVISÃO\n");
        printf("5 - POTENCIAÇÃO \n");
        printf("5 - SAIR \n");
        printf("---------------------------\n");
        
        printf("DIGITE A OPÇÃO: ");
        scanf("%d", &op);

        printf("Digite o primeiro número: ");
        scanf("%d",&num1);

        printf("Digite o segundo número: ");
        scanf("%d",&num2);

        switch(op){
            case 1:
            printf("RESULTADO: %d", adicao(num1,num2) );
            break;

            case 2:
            printf("RESULTADO: %d", subtracao(num1,num2));
            break;
            
            case 3:
            printf("RESULTADO: %d", multiplicao(num1,num2));
            break;
            
            case 4:
            printf("RESULTADO: %.2f", divisao(num1,num2));
            break;
            
            case 5:
            printf("RESULTADO: %d", potenciacao(num1,num2));
            break;
            
            case 6:
            printf("SAINDOOO..........\n");
            break;

            default:
            printf("Não tem essa opção! \n");
            break;
        }
    }while(op != 6);





    
    return 0;
}