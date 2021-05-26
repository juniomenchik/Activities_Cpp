#ifndef H_ 

#define H_ 

typedef struct {
   char *nome;
   char *sobrenome;
   int idade;
   
}PESSOA;


void Definir(PESSOA *, char *, char *, int);
PESSOA Mostrar(PESSOA *);

#endif 
