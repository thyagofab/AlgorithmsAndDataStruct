#include <stdio.h>

int numb(int vet[5]){
    for (int i = 0; i < 5; i++){
        vet[i] = i;
    }

    return vet[4];
}
void my_fuct(int vet[5]){

    for (int i = 4; i >= 0; i--){
        printf("%d", vet[i]);
    }

    printf("\n");

}

int main(){

    int principal_vet[5];
    numb(principal_vet);
    my_fuct(principal_vet);
}

