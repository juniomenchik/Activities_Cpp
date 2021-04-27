#ifndef H_ 

#define H_ 

typedef struct {
   int numero;
   int saldo;
   
}CONTA;




void iniciar(CONTA *, int);

void depositar(CONTA *, int);

void sacar(CONTA *, int);

int imprimir(CONTA *);


#endif 
