#ifndef H_ 
#define H_ 

typedef struct {
	char *nome;
	int valor;
    int estoque;  
}PRODUTO;

typedef struct {
	char *nome;
	char *sobrenome;
    int idade;  
}PESSOA;


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


void definirProduto(PRODUTO*p,char*nome,int valor,int estoque){
	p->nome = nome;
	p->valor = valor;
	p->estoque = estoque;	
	
}

PRODUTO obterProduto(PRODUTO*p){
	PRODUTO r;
	r.nome= p->nome;
	r.valor= p->valor;
	
	return r;
}
int VerificarEstoque(PRODUTO*p){
	int stoq = p->estoque;
	
	return stoq;
}



#endif 
