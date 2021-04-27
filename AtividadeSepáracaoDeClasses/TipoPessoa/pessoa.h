#ifndef H_ 
#define H_ 
typedef struct {
	char *nome;
	char *sobrenome;
    int idade;  
}PESSOA;

//METODOS

void definirPESSOA(PESSOA*, char*,char*,int);

PESSOA mostrar(PESSOA*);

void definirPESSOA(PESSOA* p , char *n,char *s,int a){
	p->nome=n;
	p->sobrenome=s;
	p->idade=a;
}

PESSOA mostrar(PESSOA* p){
	PESSOA r;
	r.nome= p->nome;
	r.sobrenome= p->sobrenome;
	r.idade= p->idade;
	return r;
	
}

#endif 
