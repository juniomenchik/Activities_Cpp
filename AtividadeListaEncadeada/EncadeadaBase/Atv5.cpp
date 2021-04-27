#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "listaEnc.h"
//
//int comprimentoEspecifico(tplista *t, int n) {  
//
//	tplista* newPoint=busca(t,n);
//	
//	int Altura =comprimento(newPoint);
//	
//	return Altura;
////}
//tplista* busca (tplista *t , int valor) {
//	tplista *p=t;
//		while ((p!=NULL) && (p->info!=valor))
//		   p=p->prox;
//	return p;
//}

//int comprimento(tplista *t) {  
//	tplista *p;
//	int numNos=0;
//	for (p=t; p!=NULL; p=p->prox){
//		numNos++;
//	}
//	return numNos;
//}

int main(){
	
   int s;
   tplista *t; /* usado para busca de valores */
   
  puts("-- Inserindo elementos --");  
  insere(&lista, 2);
  insere(&lista, 4);
  insere(&lista, 6);
  
  mostra(lista);
	
	int val = comprimento(lista);
	
	printf("Comprimento Inicial = %d \n",val);
	
	int var = comprimentoEspecifico(lista,4);
	printf("Comprimento Especifico = %d \n",var);


  mostra(lista);

return 0;
}
