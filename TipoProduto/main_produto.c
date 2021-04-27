#include <stdio.h>
#include "produto.h"
int main(){	
 
 	PRODUTO p,np;
 	char * nome="BOLA \n";
 	
 	definirProduto(&p,nome,50,1);
 	
	np=obterProduto(&p);
	
 	printf("o nome desse produto eh %s \n",np.nome);
 	
    printf("o valor desse produto eh %d \n",np.valor);
    
    int stoq = VerificarEstoque(&p);
    
    printf("O estoque desse produto eh %d",stoq);
    
	return 0;
}
