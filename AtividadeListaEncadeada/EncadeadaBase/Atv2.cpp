#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "listaEnc.h"

int main(){

	

	
	int s;
	tplista *t; /* usado para busca de valores */
   
	t.info=1212;
   	
   

	insere(&lista, 2);
	insere(&lista, 4);
	insere(&lista, 6);
	insere(&lista, 8);
	
	
	mostra(lista);
	
	retira(&lista, 4);
	
	t = busca(lista, 8);
	
	destroi(lista);
	

return 0;
}
