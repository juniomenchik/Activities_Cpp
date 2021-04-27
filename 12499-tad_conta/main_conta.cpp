
#include <stdio.h>

#include "conta.h"


int main(){

    CONTA c1;
	
	iniciar(&c1, 1);
	depositar(&c1, 10);
	depositar(&c1, 10);
	sacar(&c1, 2);
	printf("Saldo-> %d\n", imprimir(&c1));

}
