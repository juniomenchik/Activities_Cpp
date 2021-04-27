#include "conta.h"

#include <stdio.h>

void iniciar(CONTA * c, int n){
	 c->numero = n;
	 c->saldo = 0;
	 
//	 printf("CONTA=>%d\n", c->numero);
//	 printf("SALDO=>%d\n", c->saldo);
}



void depositar(CONTA * c, int v){
	
	c->saldo = c->saldo + v;

//    printf("SALDO=>%d\n", c->saldo);

	
}


void sacar(CONTA * c, int v){
	
 	c->saldo = c->saldo - v;
 	
// 	printf("SALDO=>%d\n", c->saldo);

}


int imprimir(CONTA * c){
	
	return c->saldo;
	
}

