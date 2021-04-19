#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
	
    Fila q;
	int maiorval=0;
	int menorval=0;
	int somatoria=0;
	int somaposdivisao;
    initFila(&q); /* inicializa fila */

for(int y = 1;y<=20;y++){
    printf("Digite o numero %d da sua fila : ",y);
    int n;
    scanf("%d",&n);
    insere(&q, n);
}
for(int y = 1;y<=20;y++){
	
	int atual = remove(&q);
	if(atual>maiorval){
		maiorval=atual;
		somatoria+=atual;
	}else if(atual<menorval){
		menorval=atual;
		somatoria+=atual;
	}else {
		somatoria+=atual;
	}
}
	somaposdivisao =(somatoria/20);
	printf("O Maior valor eh : %d \n",maiorval);
	printf("O Menor valor eh : %d \n",menorval);
	printf("A Media (todos os valores divididos pelo total de valores) eh : %d \n",somaposdivisao);

return 0;
}
