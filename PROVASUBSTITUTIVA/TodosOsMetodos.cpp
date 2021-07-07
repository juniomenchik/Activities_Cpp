#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "listaEnc.h"


int main(){
	
   int s;
   tplista *t; /* usado para busca de valores */
   
  puts("-- Inserindo elementos --");  
  insere(&lista, 2);
  insere(&lista, 4);
  insere(&lista, 6);
  
  mostra(lista);

  puts("\n-- Removendo elementos --");  
  retira(&lista, 2);

  s = retira(&lista, 8);  /* Removendo elemento que nao existe */
     if(!s) puts("Elemento nao encontrado");
  
  mostra(lista);

  puts("\n-- Procurando um elemento --");  
  t = busca(lista, 4);
  printf("Valor encontrado %d \n", t->info);


  puts("\n-- Destruindo lista --");  
  destroi(lista);
  
  
 getch();
return 0;
}
