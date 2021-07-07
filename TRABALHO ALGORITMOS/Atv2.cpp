#include <stdio.h>
#include "hr_time.h"
#include "hr_time.c"
#include "bubble.h"
#include "bubble.c"
#include "quick.h"
#include "quick.c"
#include "select.h"
#include "select.c"
#include "heap.h"
#include "heap.c"
#include <conio.h>
#include "merge.c"
#include "merge.h"
#include "insertion.h"
#include "insertion.c"
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()

int TAM100 = 100;

void randomize (void)
{
    srand (time (NULL));
}

void geraTestesAleatorios (void)
{
    randomize();
    int ax;
		printf("INICIANDO CONTAGEM DO TESTE DE VETOR ALEATORIO\n");
		int exaux;
		for(exaux = 1;exaux>1;exaux--){	
      for(ax = 1; ax<=10;ax++){
      	printf(" \n  TESTE NUMERO => %d \n",ax);
          int i;
          long int vetCem[TAM100];
          printf("GERANDO %d VALORES ALEATORIOS ... \n",TAM100);
          for (i=0; i < TAM100; i++){
 			   vetCem[i]=rand() % TAM100;
			  // printf("Valor numero %d do array => %d \n",i,vetCem[i]);    // Aqui Serve para Mostrar os numeros do Vetor
 			}

	// =====================/////======================
 			 int numeros[TAM100];
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
		stopWatch timerBubble;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerBubble); 	
		MOVIMENTACAOGLOBAL = 0;
		 //ORGANIZACAO Bubble 

	BubbleSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerBubble); 
        
        printf(" BUUBLE SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerBubble),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        // =====================/////======================
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
        		stopWatch timerQuick;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerQuick); 		 
		 
		 COMPARACAOGLOBAL = 0;
		 MOVIMENTACAOGLOBAL = 0;
		 
		QuickSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerQuick); 
        
        printf(" QUICK SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerQuick),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
                        stopWatch timerHeap;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerHeap); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		
		
		heapSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerHeap); 
        
        printf(" HEAP SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerHeap),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   

	}
		}
				
}

int main(){	

geraTestesAleatorios();
		
    
return 0;
}
