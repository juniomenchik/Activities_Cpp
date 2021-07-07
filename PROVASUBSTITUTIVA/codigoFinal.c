#include <stdio.h>
#include "fila.h"
#include "listaEnc.h"
#include "pilha.h"
#include <ctype.h>
#include "pilha.c"

void mistura(char arrays[]){
	
	int newax=0;	
	int a;
	char arraynospace[20];
	for(a=0;a<20;a++){
		if(arrays[a]!=' '){
			arraynospace[newax]=arrays[a];
			newax++;
		}
	}
	int aux;
	Pilha pilha;
	inicPilha(pilha);
	Fila q;
	initFila(&q); /* inicializa fila */

	int auxNum;
	int auxLetra;
	for(a=0;a<20;a++){
		if(isdigit(arraynospace[a])){
			push(&pilha,arraynospace[a]);
			auxNum++;
		}else{
			insere(&q,arraynospace[a]);
			auxLetra++;
		}
	}
	int auxarrray=0;
	char newArray[20];
	
	int whileaux=0;
	while(whileaux=0){
		if(auxLetra>0){
			newArray[auxarrray]=removeThis(&q);
			auxLetra--;
		}else
			newArray[auxarrray]=pop(pilha);
			auxNum--;
	}

}

int main(){	
    char arrays[20];
    gets(arrays);
	mistura(arrays);
	
return 0;
}
