#include <stdio.h>
#include "pessoa.h"
int main(){	
    PESSOA p1,r;
    char*  nome = "Jeff";
    char* sbnome = "Menchik";
    definirPESSOA(&p1,nome,sbnome,20);
    r = mostrar(&p1);
    printf(" %s  %s  %d ",r.nome,r.sobrenome,r.idade);
    
return 0;
}
