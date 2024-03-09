
typedef struct lista Lista;

/*Função que inicializa a lista atribuindo NULL
retorna: Lista incializada */
Lista* cria_lista();


/* função que insere elemento inteiro na lista
argumento:
    lista *lista
    int valor: valor inteiro a ser inserido

retorna:
    nova lista*/

Lista *insere_elemento(Lista* lista, int valor);

/*Função que imprime a lista
argumento:
    lista *lista: lista encadeada a ser impressa
*/
void imprimir_lista(Lista *lista);

/*Função que verifica maiores que
argumento:
    lista *lista: lista encadeada a ser verificada
    int valor: valor a ser comparado
*/
int maiores_que(Lista *lista, int valor);