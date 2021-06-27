#ifndef insertion_H
#include "insertion.h"
#define insertion_H


unsigned long int COMPARACAOGLOBAL;
unsigned long int MOVIMENTACAOGLOBAL;


void insertionSort(int arr[], int length) 
{
	int i, j, key;
	for (i = 1; i < length; i++) 
	{
		j = i;
 		while (j > 0 && arr[j - 1] > arr[j]) 
 		{
 			COMPARACAOGLOBAL+=1;
 			MOVIMENTACAOGLOBAL+=1;
 			key = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = key;
 			j--;
 		}
	}
}

void doTheInsertion(int *numeros,int TAM100,unsigned long int *COMPARACAOGLOBAL,unsigned long int *MOVIMENTACAOGLOBAL){
	insertionSort(numeros,TAM100-1);
}
 
#endif

