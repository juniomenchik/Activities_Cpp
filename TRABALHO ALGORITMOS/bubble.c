#include <windows.h>
#ifndef bubble
#include "bubble.h"
#define bubble

void BubbleSort(int *numeros,int TAM100,int *COMPARACAOGLOBAL,int *MOVIMENTACAOGLOBAL){
	int j, AUXILIAR;
	int i;
		for(i = 0; i < TAM100; i++)
		{
        	for(j = 1; j < TAM100 - i; j++)
			{
        	*COMPARACAOGLOBAL+=1; /* CONTAGEM PARA QUANDO OCORREREM COMPARAÇÕES. INCREMENTO SOMENTE NA CHAMADA DA FUNÇÃO DENTRO DA VARIÁVEL "numeroComp" */
				if(numeros[j-1] > numeros[j])
				{
			    AUXILIAR = numeros[j-1];
				numeros[j-1] = numeros[j];
				numeros[j] = AUXILIAR;
				*MOVIMENTACAOGLOBAL+=1; /* CONTAGEM PARA QUANDO OCORREREM TROCAS. INCREMENTO SOMENTE NA CHAMADA DA FUNÇÃO DENTRO DA VARIÁVEL "numeroTrocas" */
				}
			}
		}
}
		


#endif

