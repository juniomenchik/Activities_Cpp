#define TAMANHO 20
#ifndef P_
#define P_
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int topo;
	int item[TAMANHO];
}Pilha;


void initPilha(Pilha * ps){
	ps->topo = -1;
}

int pilhaCheia(Pilha * ps){
	if(ps-> topo == TAMANHO -1)
		return 1;
	else 
		return 0;
}

int pilhaVazia(Pilha * ps){
	if(ps->topo == -1)
		return 1;
	else
		return 0;
}

int push(Pilha * ps, int x){
	if(pilhaCheia(ps))
		printf("Pilha esta cheia");
	else
		return (ps->item[ ++(ps->topo)] = x);
}
char push(Pilha * ps, char x){
	if(pilhaCheia(ps))
		printf("Pilha esta cheia");
	else
		return (ps->item[ ++(ps->topo)] = x);
}

char pop(Pilha * ps){
	if(pilhaVazia(ps))
		printf("Pilha esta vazia");
	else
		return (ps->item[ (ps->topo)--]);			
}


#endif
