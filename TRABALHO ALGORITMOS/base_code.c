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
unsigned long int COMPARACAOGLOBAL;
unsigned long int MOVIMENTACAOGLOBAL;


void randomize (void)
{
    srand (time (NULL));
}




void geraTestesAleatorios (void)
{



    randomize();
    int ax;

		printf("INICIANDO CONTAGEM DOS 10 TESTES DE VETORES ALEATORIOS \n");
		int exaux;
		for(exaux = 4;exaux>0;exaux--){
			
			
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
		
		
		heapSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerHeap); 
        
        printf(" HEAP SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerHeap),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
        // =====================/////======================
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
                        stopWatch timerMerge;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerMerge); 		 
		 
		doTheMerge(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerMerge); 
        
        printf(" MERGE SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerMerge),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
        // =====================/////======================
 				for(i=0;i<TAM100;i++){
 			numeros[i]=vetCem[i];
		 }
                        stopWatch timerInserction;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerInserction); 		 
		 
		doTheInsertion(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerInserction); 
        
        printf(" INSERCTION SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerInserction),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
        // =====================/////======================
        
       
	}
			
			TAM100=TAM100*10;
		}
				
		
		


}


void geraTestesOrdenados (void) 
{
	
		TAM100=100;
		int exaux;
		for(exaux = 4;exaux>0;exaux--){
			
		printf("INICIANDO TESTE DE VETOR ORDENADO \n");	
		
		printf("GERANDO %d VALORES ORDENADOS ... \n\n",TAM100);	
		int numeros[TAM100];
		int i;
		for(i=0;i<TAM100;i++){
 			numeros[i]=i;
		}
		
		
		
		stopWatch timerBubble;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerBubble); 	
		MOVIMENTACAOGLOBAL = 0;
		 //ORGANIZACAO Bubble 

	BubbleSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerBubble); 
        
        printf(" BUUBLE SORT ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerBubble),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
        stopWatch timerQuick;  /* declaração da variável que será passada como parâmetro */
        
        startTimer(&timerQuick); 		 
		 
		 COMPARACAOGLOBAL = 0;
		 MOVIMENTACAOGLOBAL = 0;
		 
		QuickSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerQuick); 
        
        printf(" QUICK SORT ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerQuick),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
		stopWatch timerSelect;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerSelect); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		 
		SelectSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL); 
		
		 
        stopTimer(&timerSelect); 

        printf(" SELECTION SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerSelect),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
        stopWatch timerHeap;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerHeap); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		
		
		heapSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerHeap); 
        
        printf(" HEAP SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerHeap),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
        stopWatch timerMerge;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerMerge); 		 
		 
		doTheMerge(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerMerge); 
        
        printf(" MERGE SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerMerge),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
        stopWatch timerInserction;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerInserction); 		 
		 
		doTheInsertion(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerInserction); 
        
        printf(" INSERCTION SORT ALEATORIO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerInserction),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
		
			TAM100=TAM100*10;
		}
}


void geraTestesInversamenteOrdenados (void) 
{
	
		TAM100=100;
		int exaux;
		for(exaux = 4;exaux>0;exaux--){
			
		printf("INICIANDO TESTE DE VETOR INVERSAMENTE ORDENADO \n");	
		
		printf("GERANDO %d VALORES INVERSAMENTE ORDENADO ... \n\n",TAM100);	
		
		int numeros[TAM100];
		int i;
		int y;
		for(i=TAM100,y=0;i>0;i--,y++){
 			numeros[y]=i;
		}
		
		
		
		stopWatch timerBubble;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerBubble); 	
		MOVIMENTACAOGLOBAL = 0;
		COMPARACAOGLOBAL = 0;
		 //ORGANIZACAO Bubble 

	BubbleSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerBubble); 
        
        printf(" BUUBLE SORT INVERSAMENTE ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerBubble),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
        stopWatch timerQuick;  /* declaração da variável que será passada como parâmetro */
        		for(i=TAM100,y=0;i>0;i--,y++){
 			numeros[y]=i;
		}
        startTimer(&timerQuick); 		 
		 
		 COMPARACAOGLOBAL = 0;
		 MOVIMENTACAOGLOBAL = 0;
		 
		QuickSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerQuick); 
        
        printf(" QUICK SORT INVERSAMENTE ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerQuick),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
		stopWatch timerSelect;  /* declaração da variável que será passada como parâmetro */
	 		for(i=TAM100,y=0;i>0;i--,y++){
 			numeros[y]=i;
		}
        startTimer(&timerSelect); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		 
		SelectSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL); 
		
		 
        stopTimer(&timerSelect); 

        printf(" SELECTION SORT INVERSAMENTE ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerSelect),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
        stopWatch timerHeap;  /* declaração da variável que será passada como parâmetro */
	 		for(i=TAM100,y=0;i>0;i--,y++){
 			numeros[y]=i;
		}
        startTimer(&timerHeap); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		
		
		heapSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerHeap); 
        
        printf(" HEAP SORT INVERSAMENTE ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerHeap),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
        stopWatch timerMerge;  /* declaração da variável que será passada como parâmetro */
	 		for(i=TAM100,y=0;i>0;i--,y++){
 			numeros[y]=i;
		}
        startTimer(&timerMerge); 		 
		 
		doTheMerge(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerMerge); 
        
        printf(" MERGE SORT INVERSAMENTE ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerMerge),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
        stopWatch timerInserction;  /* declaração da variável que será passada como parâmetro */
	 		for(i=TAM100,y=0;i>0;i--,y++){
 			numeros[y]=i;
		}
        startTimer(&timerInserction); 		 
		 
		doTheInsertion(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerInserction); 
        
        printf(" INSERCTION SORT INVERSAMENTE ORDENADO =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerInserction),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
		
			TAM100=TAM100*10;
		}
}

void geraTestes10pcforaDeOrdem (void) 
{
	
		TAM100=100;
		int exaux;
		for(exaux = 4;exaux>0;exaux--){
			
			int vetorPorCentoFim = TAM100/100;
			vetorPorCentoFim = vetorPorCentoFim*10;
			int vetorPorCentoInicio = TAM100/100;
			vetorPorCentoInicio = vetorPorCentoInicio*90;
			
		printf("INICIANDO TESTE DE VETOR 10PorcentoForaDeOrdem \n");	
		
		printf("GERANDO %d VALORES 10porCento Fora da ORDEM ... \n\n",TAM100);	
		
		
			
		int numeros[TAM100];
		int i;
		for(i=0;i<vetorPorCentoInicio;i++){
 			numeros[i]=i;
		}
		 randomize();
		for (i=vetorPorCentoInicio; i < TAM100; i++){
 			numeros[i]=rand() % TAM100;
 		}
		
		stopWatch timerBubble;  /* declaração da variável que será passada como parâmetro */
	 
        startTimer(&timerBubble); 	
		MOVIMENTACAOGLOBAL = 0;
		 //ORGANIZACAO Bubble 

	BubbleSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerBubble); 
        
        printf(" BUUBLE SORT 10porCento Fora de Ordem =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerBubble),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
        stopWatch timerQuick;  /* declaração da variável que será passada como parâmetro */
        		for(i=0;i<vetorPorCentoInicio;i++){
 			numeros[i]=i;
		}
		 randomize();
		for (i=vetorPorCentoInicio; i < TAM100; i++){
 			numeros[i]=rand() % TAM100;
 		}
        startTimer(&timerQuick); 		 
		 
		 COMPARACAOGLOBAL = 0;
		 MOVIMENTACAOGLOBAL = 0;
		 
		QuickSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerQuick); 
        
        printf(" QUICK SORT 10porCento Fora de Ordem =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerQuick),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
		stopWatch timerSelect;  /* declaração da variável que será passada como parâmetro */
	 		for(i=0;i<vetorPorCentoInicio;i++){
 			numeros[i]=i;
		}
		 randomize();
		for (i=vetorPorCentoInicio; i < TAM100; i++){
 			numeros[i]=rand() % TAM100;
 		}
        startTimer(&timerSelect); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		 
		SelectSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL); 
		
		 
        stopTimer(&timerSelect); 

        printf(" SELECTION SORT 10porCento Fora de Ordem =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerSelect),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
        stopWatch timerHeap;  /* declaração da variável que será passada como parâmetro */
	 		for(i=0;i<vetorPorCentoInicio;i++){
 			numeros[i]=i;
		}
		 randomize();
		for (i=vetorPorCentoInicio; i < TAM100; i++){
 			numeros[i]=rand() % TAM100;
 		}
        startTimer(&timerHeap); 		 
		COMPARACAOGLOBAL = 0;
		MOVIMENTACAOGLOBAL = 0;
		
		
		heapSort(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerHeap); 
        
        printf(" HEAP SORT 10porCento Fora de Ordem =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerHeap),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
		
        stopWatch timerMerge;  /* declaração da variável que será passada como parâmetro */
	 		for(i=0;i<vetorPorCentoInicio;i++){
 			numeros[i]=i;
		}
		 randomize();
		for (i=vetorPorCentoInicio; i < TAM100; i++){
 			numeros[i]=rand() % TAM100;
 		}
        startTimer(&timerMerge); 		 
		 
		doTheMerge(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);

        stopTimer(&timerMerge); 
        
        printf(" MERGE SORT 10porCento Fora de Ordem =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerMerge),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
		
        stopWatch timerInserction;  /* declaração da variável que será passada como parâmetro */
	 		for(i=0;i<vetorPorCentoInicio;i++){
 			numeros[i]=i;
		}
		 randomize();
		for (i=vetorPorCentoInicio; i < TAM100; i++){
 			numeros[i]=rand() % TAM100;
 		}
        startTimer(&timerInserction); 		 
		 
		doTheInsertion(numeros,TAM100,&COMPARACAOGLOBAL,&MOVIMENTACAOGLOBAL);
		 
        stopTimer(&timerInserction); 
        
        printf(" INSERCTION SORT 10porCento Fora de Ordem =  %f  segundos, %d Movimentacoes e %d Comparacoes. \n",getElapsedTime(&timerInserction),MOVIMENTACAOGLOBAL,COMPARACAOGLOBAL);   
        
		
			TAM100=TAM100*10;
		}
}










int main(){	

//    stopWatch timer;  /* declaração da variável que será passada como parâmetro */
//        startTimer(&timer); 
//        stopTimer(&timer); 
//      printf(" Vetor ordenado!!!  %f  segundos \n", getElapsedTime(&timer));   
//      
		int control=20;
		while(control!=0){
			
			printf("Voce deseja ver que Tipo de teste de Ordenacao? \nPara ver o Teste de vetores aleatorios digite 1\nPara ver o Teste de vetores ordenados digite 2\nPara ver o Teste de vetores quase ordenados(10porcentoForaDeOrdem) digite 3\nPara ver o Teste de vetores inversamente ordenados digite 4\n E caso queira SAIR digite 0\n");
			scanf("%d",&control);
			if(control==1){
				geraTestesAleatorios();
				printf("\n\n");
			}
			if(control==2){
				geraTestesOrdenados();
				printf("\n\n");
			}
			if(control==3){
				geraTestes10pcforaDeOrdem();
				printf("\n\n");
			}
			if(control==4){
				geraTestesInversamenteOrdenados();
				printf("\n\n");
			}
		}
		
		
    
return 0;
}
