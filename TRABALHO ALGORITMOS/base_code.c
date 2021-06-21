#include <stdio.h>
#include "hr_time.h"
#include "hr_time.c"
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()

int main(){	

//    stopWatch timer;  /* declaração da variável que será passada como parâmetro */
//        startTimer(&timer); 
//        stopTimer(&timer); 
//      printf(" Vetor ordenado!!!  %f  segundos \n", getElapsedTime(&timer));   
//      
      
      int ax;

		printf("INICIANDO CONTAGEM DOS 10 TESTES DE VETORES ALEATORIOS \n");
		
      for(ax = 1; ax<=10;ax++){
      	
      	printf(" \n  TESTE NUMERO => %d \n",ax);
      	
          int i;
          int vetCem[100];
  		  srand(time(NULL));
          printf("GERANDO 100 VALORES ALEATORIOS ... \n");
          for (i=0; i < 100; i++){
 			   vetCem[i]=rand() % 9;
// 			   printf("%d",vetCem[i]);    // Aqui Serve para Mostrar os numeros do Vetor
 			}


	    // =====================/////======================

		stopWatch timerBubble;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerBubble); 		 
		 
		 //ORGANIZACAO Bubble 
		 
        stopTimer(&timerBubble); 
        
        printf(" BUUBLE SORT ALEATORIO   -----   %f  segundos \n",getElapsedTime(&timerBubble));   
        
        // =====================/////======================
        		stopWatch timerQuick;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerQuick); 		 
		 
		 //ORGANIZACAO Quick 
		 
        stopTimer(&timerQuick); 
        
        printf(" QUICK SORT ALEATORIO  -----   %f  segundos \n",getElapsedTime(&timerQuick));   
        
        // =====================/////======================
                stopWatch timerSelect;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerSelect); 		 
		 
		 //ORGANIZACAO Select 
		 
        stopTimer(&timerSelect); 
        
        printf(" SELECTION SORT ALEATORIO -----   %f  segundos \n",getElapsedTime(&timerSelect));   
        
        // =====================/////======================
                        stopWatch timerHeap;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerHeap); 		 
		 
		 //ORGANIZACAO Heap 
		 
        stopTimer(&timerHeap); 
        
        printf(" HEAP SORT ALEATORIO -----   %f  segundos \n",getElapsedTime(&timerHeap));   
        
        // =====================/////======================
                        stopWatch timerMerge;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerMerge); 		 
		 
		 //ORGANIZACAO Merge 
		 
        stopTimer(&timerMerge); 
        
        printf(" MERGE SORT ALEATORIO -----   %f  segundos \n",getElapsedTime(&timerMerge));   
        
        // =====================/////======================
                        stopWatch timerInserction;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerInserction); 		 
		 
		 //ORGANIZACAO MergeInserction 
		 
        stopTimer(&timerInserction); 
        
        printf(" INSERCTION SORT ALEATORIO -----   %f  segundos \n",getElapsedTime(&timerInserction));   
        
        // =====================/////======================
        
       
	}
   
      
      
    
return 0;
}
