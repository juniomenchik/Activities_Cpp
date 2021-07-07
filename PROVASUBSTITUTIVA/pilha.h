#define TAMANHO 20
#ifndef P_
#define P_

typedef struct{
	int topo;
	int item[TAMANHO];
}Pilha;

void initPilha(Pilha * ps);

int pilhaCheia(Pilha * ps);

int pilhaVazia(Pilha * ps);

int push(Pilha * ps, char x);

int pop(Pilha * ps);

#endif
