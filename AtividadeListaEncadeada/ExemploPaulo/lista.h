#ifndef Listas
#define Lista

typedef struct tp_no {
	   int info;
	   struct tp_no *prox;
} tplista; 
int vazia (tplista *t) ;
/**
* Aloca novo nodo e retorna ponteiro para ele 
**/
tplista* aloca( ) ;
/**
* Mostra os elementos da lista
**/
void mostra(tplista *t) ;
/**
* Procura um elemento na lista. Retorna ponteiro para sua posicao
**/
tplista* busca (tplista *t , int valor) ;

/**
* Insere um elemento na lista  (valor por referencia)
**/
int insere(tplista **t , int e);
/**
* Retira um elemento da lista  (valor por referencia)
**/
int retira(tplista **t, int e);

/**
* Destroi a lista criada previamente
**/
void destroi(tplista *t);

void comprimento (tplista *t);
#endif
