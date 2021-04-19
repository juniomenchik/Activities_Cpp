#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"
int main(){
	
    Fila q;
    initFila(&q); /* inicializa fila */
	Pilha p;
	inicPilha(&p);
	
    printf("Empilhe 10 valores\n");
    
for(int y = 1;y<=10;y++){
    int n;
    scanf("%d",&n);
    push(&p, n);
}
for(int y = 1;y<=10;y++){
    int n= pop(&p);
    insere(&q,n);
}

	display(&q);
	
return 0;
}
