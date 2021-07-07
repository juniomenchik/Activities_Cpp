#include <stdio.h>
#include "hr_time.h"
#include "hr_time.c"
#include "bubble.h"
#include "bubble.c"
#include "quick.h"
#include "quick.c"
#include "heap.h"
#include "heap.c"
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()


long int TAM100 = 100;

void randomize (void)
{
    srand (time (NULL));
}

int main(){
	
  randomize();
    int ax;
		printf("INICIANDO CONTAGEM DO TESTES DE VETOR ALEATORIO \n");

          int i;
          long int vetCem[TAM100];
          printf("GERANDO %d VALORES ALEATORIOS ... \n",TAM100);
          for (i=0; i < TAM100; i++){
 			   vetCem[i]=rand() % TAM100;
			  // printf("Valor numero %d do array => %d \n",i,vetCem[i]);    // Aqui Serve para Mostrar os numeros do Vetor
 			}
 			
 		 int VetorCopia1[TAM100];
 		 int VetorCopia2[TAM100];
 		 int VetorCopia3[TAM100];
 			
 			for(i=0;i<TAM100;i++){
 				VetorCopia1[i]=vetCem[i];
 				VetorCopia2[i]=vetCem[i];
 				VetorCopia3[i]=vetCem[i];
			 }
			 
			 
		stopWatch timerBubble;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerBubble); 	

	BubbleSort(VetorCopia1,TAM100);

        stopTimer(&timerBubble); 
        
        printf(" BUUBLE SORT ALEATORIO =  %f  segundos \n",getElapsedTime(&timerBubble),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
			 
 		
 		


return 0;
}
