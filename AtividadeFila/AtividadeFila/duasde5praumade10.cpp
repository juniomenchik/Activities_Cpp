#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
	
    Fila q,p,ultima;
    
    initFila(&q); /* inicializa fila */
    initFila(&p); /* inicializa fila */
    initFila(&ultima); /* inicializa fila */
    
    
for(int y = 1;y<=5;y++){
    printf("Digite o numero %d da sua fila : ",y);
    int n;
    scanf("%d",&n);
    insere(&q, n);
}

for(int y = 1;y<=5;y++){
    printf("Digite o numero %d da sua fila : ",y);
    int n;
    scanf("%d",&n);
    insere(&p, n);
}

for(int y = 1;y<=5;y++){
	int aunx = remove(&q);
    insere(&ultima, aunx);
}

for(int y = 1;y<=5;y++){
	int aunx = remove(&p);
    insere(&ultima, aunx);
}

	display(&ultima);
	
	

	

return 0;
}
