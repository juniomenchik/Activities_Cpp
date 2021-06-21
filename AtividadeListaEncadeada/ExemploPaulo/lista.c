#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista.h"


int vazia (tplista *t) {  
		return (t==NULL);
}

/**
* Aloca novo nodo e retorna ponteiro para ele 
**/
tplista *aloca( ) {
	tplista *pt;
	pt=(tplista*) malloc(sizeof(tplista));
	return pt;
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
* Procura um elemento na lista. Retorna ponteiro para sua posicao
**/
tplista* busca (tplista *t , int valor) {
	tplista *p=t;
		while ((p!=NULL) && (p->info!=valor))
		   p=p->prox;
	return p;
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
		q=p->prox; /* guarda referência p/ o próximo */
		free(p); /* libera a memória apontada por p */
		p=q; /* faz p apontar para o próximo */
	}
}

void comprimento(tplista *t) {
	tplista *p=t, *q;
	int aux = 0;
	while (p!=NULL) {
		q=p->prox; /* guarda referência p/ o próximo */
		p=q; /* faz p apontar para o próximo */
		aux++;
	}
	printf ("\n%d", aux);
}

