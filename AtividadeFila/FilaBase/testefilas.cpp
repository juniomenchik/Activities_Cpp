#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

	Fila q;
	
	initFila(&q); /* inicializa fila */

	insere(&q, 1);
	insere(&q, 2);
	insere(&q, 3);
	insere(&q, 4);
	insere(&q, 5); 
	
	insere(&q, 6); /* overflow */
      
	display(&q);  /*  mostra a fila */

	printf("-> %d \n", remove(&q));
	printf("-> %d \n", remove(&q));        
	printf("-> %d \n", remove(&q));
	printf("-> %d \n", remove(&q));
	printf("-> %d \n", remove(&q)); 
	printf("-> %d \n", remove(&q)); //underflow

 	display(&q);   /*  mostra a fila */


return 0;
}
