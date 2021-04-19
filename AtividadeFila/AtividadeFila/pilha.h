#ifndef H 
#define H 
#define TAMANHO 10
typedef struct {
    int topo;
    int item[TAMANHO];
}Pilha;
//METODOS
void inicPilha(Pilha* p){
    p->topo=-1;
}

int pilhaVazia(Pilha* p){
    if(p->topo==-1){
        return 1;
    }else return 0;
}

int pilhaCheia(Pilha* p){
    if(p->topo==TAMANHO - 1){
        return 1;
    }else return 0;
}

void push(Pilha* p,int n){
    if(pilhaCheia(p)){
        printf("Pilha ta cheia");
    }else{
        p->topo++;
        p->item[p->topo]=n;
    }
}

int pop(Pilha* p){

    if(pilhaVazia(p)){
        return 0;
    }else{
        return (p->item[p->topo--]);
    }
}

void qualtopo(Pilha* p){
    if(pilhaVazia(p)){
        printf("Pilha ta vazia");
    }else {
        printf("%d",p->item[p->topo]);
    }

}
#endif
