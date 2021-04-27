#ifndef H_ 
#define H_ 

/* Estrutura da lista*/
typedef struct tp_no {
	   int info;
	   struct tp_no *prox;
} tplista; 


tplista *lista = NULL;



/**
* Verifica se lista estah vazia
**/
int vazia (tplista *t) {  
		return (t==NULL);
}
/**
* Aloca novo nodo e retorna ponteiro para ele 
**/
tplista* aloca( ) {
	tplista* pt;
	pt=(tplista*) malloc(sizeof(tplista));
	return pt;
}
/**
* Procura um elemento na lista. Retorna ponteiro para sua posicao
**/
tplista* busca (tplista *t , int valor) {
	tplista *p=t;
		while ((p!=NULL) && (p->info!=valor))
		   p=p->prox;
	return p;
}
/**
* Mostra os elementos da lista
**/
void mostra(tplista *t) {  
	tplista *p;
	for (p=t; p!=NULL; p=p->prox)
		printf("Info: %d\n", p->info);
}
/**
* Mostra o numero de nos da lista
**/

int comprimento(tplista *t) {  
	tplista *p;
	int numNos=0;
	for (p=t; p!=NULL; p=p->prox){
		numNos++;
	}
	return numNos;
}

/**
* Mostra o numero de nos a partir de um numero
**/

int comprimentoEspecifico(tplista *t, int n) {  

	tplista* newPoint=busca(t,n);
	
	int Altura =comprimento(newPoint);
	
	return Altura;
}

tplista *inverter (tplista *ponteiro){
    tplista *anterior, *atual, *prox;
    anterior = NULL;
    atual = ponteiro;

    while (atual != NULL){
        prox = atual->prox;
        atual->prox = anterior;
        anterior =atual;
        atual = prox;
    }
    return anterior;
}



/**
* Insere um elemento na lista  (valor por referencia)
**/
int insere(tplista **t , int e) {
    tplista *novo;
	
    tplista *ant=NULL;
	tplista *p=*t;
	novo = aloca();
	if (!novo) 
		return 0;
	novo->info = e;
	while (p && p->info < e) {
		ant=p;
		p=p->prox;  
	  }
    novo->prox=p; 
	if (ant==NULL)
		*t=novo;
	else 
		ant->prox=novo; 
	return 1;
}
/**
* Retira um elemento da lista  (valor por referencia)
**/
int retira(tplista **t, int e) {
	tplista *ant=NULL, *p=*t;
	while (p!=NULL && p->info != e)
	{
		ant=p;
		p=p->prox;  
	 }
	if (p==NULL) 
		return 0; 
	else {
		if (ant==NULL)
			*t=p->prox;
		else 
			ant->prox=p->prox; 
		free(p);
		return 1;
	}
}
/**
* Destroi a lista criada previamente
**/
void destroi(tplista *t) {
	tplista *p=t, *q;
	while (p!=NULL) {
		q=p->prox; /* guarda refer?ncia p/ o pr?ximo */
		free(p); /* libera a mem?ria apontada por p */
		p=q; /* faz p apontar para o pr?ximo */
	}
}
#endif 
