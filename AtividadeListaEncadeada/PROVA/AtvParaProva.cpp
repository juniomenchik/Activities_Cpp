#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include "fila.h"
#include "pilha.h"
#include "lista.h"
#include <ctype.h>

	tplista * misturar(Fila f){
		
		tplista * neolista
		
		Fila filaz;
		Pilha pilha;
		inicioFila(&filaz);
		initPilha(&pilha);
		
		
		while(filaVazia(&fila)==0){
		char var = remover(&f);
		
		if(isdigit(var)==1){
		push(&pilha,var);
		}else{
		insere(&filaz,var);	
		}
		
	}
		
	while(filaVazia(&fila)==0){
		
		insere(neolista,remover(&filaz));
	}
	while(pilhaVazia(&pilha)==0){
		insere(neolista,pop(&pilha));
	}
	
	
	
		return neolista;
	}


int  main(){
     
    
    char entrada = '.';
    
	tplista list;
	
	Fila fila;
	
	
	printf("Para sair, de espaco, e apos isso, enter \n");
	printf("Digite Seus Caracteres um por um ! \n ");
		
	
	while(entrada!=' '){
		
		scanf("%c",&entrada);

		insere(&fila,entrada);
		
	}
	
	list = misturar(fila);
	
	mostra(fila);
	
	 

 return 0;    
}     
