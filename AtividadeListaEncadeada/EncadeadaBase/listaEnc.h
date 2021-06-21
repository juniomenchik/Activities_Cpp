#ifndef H_ 
#define H_ 


typedef struct tp_no {
	   int info;
	   struct tp_no *prox;
} tplista; 
int vazia (tplista *t) {  
		return (t==NULL);
}
tplista* aloca( ) {
	tplista* pt;
	pt=(tplista*) malloc(sizeof(tplista));
	return pt;
}
tplista* busca (tplista *t , int valor) {
	tplista *p=t;
		while ((p!=NULL) && (p->info!=valor))
		   p=p->prox;
	return p;
}
void mostra(tplista *t) {  
	tplista *p;
	for (p=t; p!=NULL; p=p->prox)
		printf("Info: %d\n", p->info);
}
int comprimento(tplista *t) {  
	tplista *p;
	int numNos=0;
	for (p=t; p!=NULL; p=p->prox){
		numNos++;
	}
	return numNos;
}
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
void destroi(tplista *t) {
	tplista *p=t, *q;
	while (p!=NULL) {
		q=p->prox; /* guarda refer?ncia p/ o pr?ximo */
		free(p); /* libera a mem?ria apontada por p */
		p=q; /* faz p apontar para o pr?ximo */
	}
}
#endif 
