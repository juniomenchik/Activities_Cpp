#include <windows.h>
#ifndef quick
#include "quick.h"
#define quick

unsigned long int COMPARACAOGLOBAL;
unsigned long int MOVIMENTACAOGLOBAL;

void Quick(int vetor[],int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      	COMPARACAOGLOBAL++;
      while (vetor[j] > pivo) j = j - 1;
      	COMPARACAOGLOBAL++;
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) {
   	Quick(vetor, inicio, j);
   	MOVIMENTACAOGLOBAL++;
   }
   if(i < fim){
    Quick(vetor, i, fim);	
    MOVIMENTACAOGLOBAL++;
   }   

}



void QuickSort(int *numeros,int TAM100,unsigned long int *COMPARACAOGLOBAL,unsigned long int *MOVIMENTACAOGLOBAL){

	Quick(numeros,0,TAM100-1);

}
		


#endif

