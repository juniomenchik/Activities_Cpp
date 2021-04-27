#include <stdio.h>
#include "vendas.h"
int main(){	
    PESSOA p1,r;
    char*  nome = "Jeff";
    char* sbnome = "Menchik";
    definirPESSOA(&p1,nome,sbnome,20);
    r = mostrar(&p1);
    printf(" %s  %s  %d ",r.nome,r.sobrenome,r.idade);
    
    PRODUTO j,nj;
 	char * name="BOLA \n";
 	
 	definirProduto(&j,name,50,1);
 	
	np=obterProduto(&j);
	
 	printf("o nome desse produto eh %s \n",nj.name);
 	
    printf("o valor desse produto eh %d \n",nj.valor);
    
    int stoq = VerificarEstoque(&j);
    
    printf("O estoque desse produto eh %d",stoq);
    
    
return 0;
}
