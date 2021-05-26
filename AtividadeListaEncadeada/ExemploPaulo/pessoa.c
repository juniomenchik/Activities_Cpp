#include "pessoa.h"

#include <stdio.h>


void Definir(PESSOA * p, char * n, char * s, int i){
	p->nome = n;
	p->sobrenome = s;
	p->idade = i;
}

PESSOA Mostrar(PESSOA * p){

	PESSOA r;
	
    r.nome = p->nome;
    r.sobrenome = p->sobrenome;
    r.idade = p->idade;
	  
		return r;
}








