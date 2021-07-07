#include <windows.h>
#ifndef bubble
#include "bubble.h"
#define bubble

void BubbleSort(int *numeros,int TAM100){
	int j, AUXILIAR;
	int i;
		for(i = 0; i < TAM100; i++)
		{
        	for(j = 1; j < TAM100 - i; j++)
			{
        
				if(numeros[j-1] > numeros[j])
				{
			    AUXILIAR = numeros[j-1];
				numeros[j-1] = numeros[j];
				numeros[j] = AUXILIAR;
		
				}
			}
		}
}
		


#endif

