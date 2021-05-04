#ifndef F_
#define F_
#define TAMANHO 20
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int ini, fim;
	int vet[TAMANHO];
}Fila;

void inicioFila(Fila * p){
	p-> ini = p->fim = 0;
}

int filaVazia(Fila * p){
	if(p->fim == p->ini){
		return 1;
	}else return 0;
}

int incr (int i){
	if (i == TAMANHO)
		return 0;
	else
		return i+1;
}

int insere (Fila * p, int v){
	if (incr(p -> fim) == p->ini){
		printf("Capacidade de fila maximaaaaaaaaaaaaaa \n");
		return 0;
	}
	p->vet[p->fim] = v;
	p->fim = incr(p->fim);
}

char insere (Fila * p, char v){
	if (incr(p -> fim) == p->ini){
		printf("Capacidade de fila maximaaaaaaaaaaaaaa \n");
		return 0;
	}
	p->vet[p->fim] = v;
	p->fim = incr(p->fim);
}

char remover (Fila * p){
	char v;
	if (p->fim == p->ini){
		return 0;
	}
	v = p->vet[p ->ini];
	p->ini = incr(p->ini);
	return v;
}

void display(Fila * p){
	char i;
	for (i=p->ini; i!=p->fim; i=incr(i))
		printf("%c", p->vet[i]);
}

#endif


