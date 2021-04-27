#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "listaEnc.h"

///**
//* Mostra o numero de nos da lista
//**/
//int comprimento(tplista *t) {  
//	tplista *p;
//	int numNos=0;
//	for (p=t; p!=NULL; p=p->prox){
//		if(numNos==0){
//			numNos+=2;
//		}else
//		numNos++;
//	}
//	return numNos;
//}


int main(){
	
	int s;
	tplista *t; /* usado para busca de valores */
   
	mostra(lista);
	
	retira(&lista, 4);
	
	int comp=comprimento(lista);
	printf("%d",comp);
	
	t = busca(lista, 8);
	
	destroi(lista);
	
return 0;
}
