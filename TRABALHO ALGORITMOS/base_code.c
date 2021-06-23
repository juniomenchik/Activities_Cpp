#include <stdio.h>
#include "hr_time.h"
#include "hr_time.c"
#include "bubble.h"
#include "bubble.c"
#include "quick.h"
#include "quick.c"
#include "select.h"
#include "select.c"
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()
#define TAM100  100

int COMPARACAOGLOBAL;
int MOVIMENTACAOGLOBAL;


void randomize (void)
{
    srand (time (NULL));
}




int main(){	

//    stopWatch timer;  /* declaração da variável que será passada como parâmetro */
//        startTimer(&timer); 
//        stopTimer(&timer); 
//      printf(" Vetor ordenado!!!  %f  segundos \n", getElapsedTime(&timer));   
//      
    randomize();
    int ax;

		printf("INICIANDO CONTAGEM DOS 10 TESTES DE VETORES ALEATORIOS \n");
		
      for(ax = 1; ax<=10;ax++){
      	printf(" \n  TESTE NUMERO => %d \n",ax);
          int i;
          int vetCem[TAM100];
          printf("GERANDO 100 VALORES ALEATORIOS ... \n");
          for (i=0; i < TAM100; i++){
 			   vetCem[i]=rand() % 10;
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
        
        // =====================/////======================
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
                
		stopWatch timerSelect;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerSelect); 		 
				          COMPARACAOGLOBAL = 0;
		 MOVIMENTACAOGLOBAL = 0;
		 
		SelectSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL); 
		
		 
        stopTimer(&timerSelect); 

        printf(" SELECTION SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerSelect),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
        // =====================/////======================
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
                        stopWatch timerHeap;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerHeap); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		 //ORGANIZACAO Heap 
		 
        stopTimer(&timerHeap); 
        
        printf(" HEAP SORT ALEATORIO -----   %f  segundos \n",getElapsedTime(&timerHeap));   
        
        // =====================/////======================
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
                        stopWatch timerMerge;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerMerge); 		 
		 

        stopTimer(&timerMerge); 
        
        printf(" MERGE SORT ALEATORIO -----   %f  segundos \n",getElapsedTime(&timerMerge));   
        
        // =====================/////======================
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
                        stopWatch timerInserction;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerInserction); 		 
		 
		 //ORGANIZACAO MergeInserction 
		 
        stopTimer(&timerInserction); 
        
        printf(" INSERCTION SORT ALEATORIO -----   %f  segundos \n",getElapsedTime(&timerInserction));   
        
        // =====================/////======================
        
       
	}
   
      
      
    
return 0;
}
