#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

    Fila q;

    initFila(&q); /* inicializa fila */

for(int y = 1;y<=10;y++){
    printf("Digite o numero %d da sua fila : ",y);
    int n;
    scanf("%d",&n);
    insere(&q, n);
}

    display(&q);  /*  mostra a fila */

return 0;
}
