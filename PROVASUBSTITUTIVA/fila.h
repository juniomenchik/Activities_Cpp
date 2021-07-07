#ifndef H_ 
#define H_ 
#define N 5
typedef struct stack {
	int ini,fim;
	int vet[N];
}Fila;

//METODOS

void initFila(Fila* f){
	f->ini = 0; 
	f->fim = 0;
}

int incr (int i) {
        if (i == N) 
                return 0; 
         else
                return i+1;
 }

int insere (Fila* q, char v) { 
        if (incr(q->fim) == q->ini){ // fila cheia
             printf("Capacidade da fila estourou \n"); 
              return 0; 
         } 
       // insere elemento na próxima posição livre 
       q->vet[q->fim] = v; 
       q->fim = incr(q->fim); 
}

int removeThis (Fila* q) { 
      int v; 
      if (q->fim == q->ini) { 
           printf("Fila vazia.\n"); 
          return 0;
        } 
        //retira elemento no inicio 
        v = q->vet[q->ini]; 
        q->ini = incr(q->ini); 
             return v; 
}

void display(Fila* q){ 
      int i; 
       for (i=q->ini; i!=q->fim; i=incr(i)) {
       	
       	 printf("%d\n", q->vet[i]); 
	   }
	   
                 
  }


#endif 

