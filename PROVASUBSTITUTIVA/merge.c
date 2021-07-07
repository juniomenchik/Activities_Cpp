#ifndef merge_H
#include "merge.h"
#define merge_H


unsigned long int COMPARACAOGLOBAL;
unsigned long int MOVIMENTACAOGLOBAL;

// lets take a[5] = {32, 45, 67, 2, 7} as the array to be sorted.
// function to merge the subarrays
void merge(int a[], int p, int q, int r)
{
	
    int b[r+1];   //same size of a[]
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;
    while(i <= q && j <= r)
    {
    	COMPARACAOGLOBAL+=1;
        if(a[i] < a[j])
        {
        	MOVIMENTACAOGLOBAL+=1;
            b[k++] = a[i++];    // same as b[k]=a[i]; k++; i++;
        }
        else
        {
        	MOVIMENTACAOGLOBAL+=1;
            b[k++] = a[j++];
        }
    }
  
    while(i <= q)
    {
    	COMPARACAOGLOBAL+=1;
        b[k++] = a[i++];
    }
  
    while(j <= r)
    {
    	COMPARACAOGLOBAL+=1;
        b[k++] = a[j++];
    }
  
    for(i=r; i >= p; i--)
    {
    	COMPARACAOGLOBAL+=1;
    	MOVIMENTACAOGLOBAL+=1;
        a[i] = b[--k];  // copying back the sorted list to a[]
    } 
}
// merge sort function
void mergeSort(int a[], int p, int r)
{	
    int q;
    COMPARACAOGLOBAL+=1;
    if(p < r)
    {
    	MOVIMENTACAOGLOBAL+=1;
        q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
    }
}



void doTheMerge(int *numeros,int TAM100,unsigned long int *COMPARACAOGLOBAL,unsigned long int *MOVIMENTACAOGLOBAL){
	mergeSort(numeros,0,TAM100-1);
}

 
#endif

