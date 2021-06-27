#include <windows.h>
#ifndef heap
#include "heap.h"
#define heap


unsigned long int COMPARACAOGLOBAL;
unsigned long int MOVIMENTACAOGLOBAL;

/*  Below program is written in C++ language  */

void swap(int *a,int *b){
	MOVIMENTACAOGLOBAL+=1;
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 
    // if left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
     	COMPARACAOGLOBAL+=1;
    // if right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 		COMPARACAOGLOBAL+=1;
    // if largest is not root
    if (largest != i)
    {	
    	COMPARACAOGLOBAL+=1;
    	int xar = arr[i];
    	int xore= arr[largest];
        swap(&xar, &xore);
 		arr[i]=xar;
 		arr[largest]=xore;
        // recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void doTheHeapSort(int arr[], int n)
{
	int i;
    // build heap (rearrange array)
    for (i = n / 2 - 1; i >= 0; i--)

        heapify(arr, n, i);
 
    // one by one extract an element from heap
    for (i=n-1; i>=0; i--)
    {
    	int xar = arr[0];
    	int xore= arr[i];
        // move current root to end	
        
        swap(&xar, &xore);
 		arr[0]=xar;
 		arr[i]=xore;
 
 
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
 		
void heapSort(int *numeros,int TAM100,unsigned long int *COMPARACAOGLOBAL,unsigned long int *MOVIMENTACAOGLOBAL){
	doTheHeapSort(numeros,TAM100);
}
#endif

