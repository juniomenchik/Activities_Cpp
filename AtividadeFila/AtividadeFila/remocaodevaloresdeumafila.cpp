#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

	Fila q;
	int x = 1;
	int aux[10];
	int otheraux;
	initFila(&q); /* inicializa fila */

for(int y = 1;y<=10;y++){
	printf("Digite o numero %d da sua fila : ",y);
	int n;
	scanf("%d",&n);
	insere(&q, n);
}

for(int y = 1;y<=10;y++){

	int var = displayOne(&q);
	if(var%2==0){
		remove(&q);
		printf("O numero %d eh par  e sera deletado \n",var);
	}else{
		printf("O numero %d eh impar e continuara na lista \n",var);
		aux[x++]=var;
		remove(&q);
	}
}
otheraux = x;
x = 1;
for(int y = 1;y<otheraux;y++){
	insere(&q, aux[x++]);
}
	printf("O numero de elementos impares eh %d",--otheraux);
	
return 0;
}
