#ifndef H_ 
#define H_ 

typedef int tp_item;
typedef struct tp_no {
	   int info;
	   struct tp_no *prox;
} tplista; 
tplista *lista;

void initLista(tplista* f){
	lista = NULL;
}

int vazia (tplista *t) {  
		return (t==NULL);
	 }



tplista* aloca() {
	tplista* pt;
	pt=(tplista*) malloc(sizeof(tplista));
	return pt;
}

tplista* insere (tplista *t , int valor) {
	tplista *novo;
	novo = aloca();
	if (!novo) {
		return(NULL);
	}
	else {
		novo->info = valor;
		novo->prox = t;
		return(novo);
	}
}

tplista* busca (tplista *t , int valor) {
	tplista *p=t;
		while ((p!=NULL) && (p->info!=valor)){
			p=p->prox;	
		}
	return p;
}

void listagem (tplista *t) {  
	tplista *p;
	for (p=t; p!=NULL; p=p->prox)
		printf("Info: %d\n", p->info);
}

int retira (tplista **t, tp_item e) {
	tplista *ant=NULL, *p=*t;
	while (p!=NULL && p->info!= e){
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

void destroi (tplista *t) {
	tplista *p=t, *q;
	while (p!=NULL) {
		q=p->prox; /* guarda referência p/ o próximo */
		free(p); /* libera a memória apontada por p */
		p=q; /* faz p apontar para o próximo */
	}
}



#endif 

