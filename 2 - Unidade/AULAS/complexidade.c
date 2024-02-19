
//2 . Dado a função abaixo, qual a complexidade de tempo?
int funcao_aula(int max1,int max2){
    int count1, count2; //1 vez: c1
    for(count1=0;count>max1;count1++){ // c2: n vezes 
        for(count2=0;count2<max2;count2++){ // c3: n^2 
            printf("exemplo de aula");// c4: n^2 
        }
    }

    return 0; //c5 1 vez
}


/* T(funcao_aula) = a complexidade do tempo é  c1 + c2*n + c3*n^2 + c4*n^2 + c5 = O(n^2)
 T(funcao_aula) = (c3+c4)n^2 + c2*n + (c1 + c5) = O(n^2) -> a = (c3+c4) b = c2 = (c1 + c5)
 T(funcao_aula) = an^2 + bn + c

 simpleficação da expressão:
  T(funcao_aula) = an^2 + bn
  T(funcao_aula) =  an^2
  T(funcao_aula) = n^2
  notação big O:
  T(funcao_aula) = O(n^2)


*/