#include <stdio.h>

#include "pessoa.h"


int main(){

    PESSOA p1, r;
    
    char * n = "joao";
    char * s = " silva";

    Definir(&p1, n, s, 40);
    
    r = Mostrar(&p1);
    
    
	printf("NOME-> %s  SOBRENOME-> %s  IDADE->%d\n", r.nome, r.sobrenome, r.idade);
    
	
	
}
