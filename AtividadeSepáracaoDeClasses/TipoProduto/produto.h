#ifndef H_ 
#define H_ 
typedef struct {
	char *nome;
	int valor;
    int estoque;  
}PRODUTO;

//METODOS

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
