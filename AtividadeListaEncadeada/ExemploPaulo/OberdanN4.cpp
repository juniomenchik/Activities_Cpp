#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista.h"

int main(){
	
   int s;
   tplista *lista = NULL;
   tplista *t; /* usado para busca de valores */
   
  puts("-- Inserindo elementos --");  
	insere(&lista, 2);
	insere(&lista, 4);
	insere(&lista, 6);
	insere(&lista, 8);
  	mostra(lista);
  	
  puts("\n-- Destruindo lista --");  
  destroi(lista);

 return 0;   
}

