#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "listaEnc.h"

//tplista *inverter (tplista *ponteiro){
//    tplista *anterior, *atual, *prox;
//    anterior = NULL;
//    atual = ponteiro;
//
//    while (atual != NULL){
//        prox = atual->prox;
//        atual->prox = anterior;
//        anterior =atual;
//        atual = prox;
//    }
//    return anterior;
//}


int main(){
   int s;
   tplista *t; /* usado para busca de valores */

	puts("-- Inserindo elementos --");  
	insere(&lista, 2);
	insere(&lista, 4);
	insere(&lista, 6);
  
  	mostra(lista);
  	
  	tplista *j = inverter(t);
  	
  	mostra(lista);
  	
  	

 return 0;   
}
