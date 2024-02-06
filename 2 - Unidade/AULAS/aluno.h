/*Definição de novo tipo: Aluno*/

typedef struct aluno Aluno;

/*função que aloca memoria para 
struct aluno, recebe os dados via teclado e retorna
um ponteiro para Aluno*/
Aluno * recebe_dados(void);


/*Essa função tem objetivo de imprimir os dados do aluno*/
void imprimir(Aluno * alunos);

/*Essa função tem como objetivo de liberar a memoria no final do programa*/
void liberar(Aluno *p);
