#include <windows.h>
#ifndef select
#include "select.h"
#define select

unsigned long int COMPARACAOGLOBAL;
unsigned long int MOVIMENTACAOGLOBAL;
int TAM100;
void SelectSort(int *numeros,int TAM100,unsigned long int *COMPARACAOGLOBAL,unsigned long int *MOVIMENTACAOGLOBAL)
{
    int vMenor;
    int vAux;
    int vTemp;
    int vTroca;

    for(vAux=0; vAux < TAM100-1; vAux++) // Percorre todo o vetor até TAM-1, pois a ultima posição não precisa testar pois ja estara ordenada;
    {
    	
        vMenor = vAux; // Menor valor recebe a posição que está passando;

		
        for (vTemp=vAux+1; vTemp < TAM100; vTemp++) // Percorre o vetor da posição vAux+1 até o final;
        {
        	
        			*COMPARACAOGLOBAL+=1;
            if (numeros[vTemp] < numeros[vMenor]) // Testa se a posição que está passando é menor que o menor valor;
            {
                vMenor = vTemp; // vMenor recebe a posição do menor valor;
                           *MOVIMENTACAOGLOBAL+=1;
            }
        }
*COMPARACAOGLOBAL+=1;
        if (vMenor != vAux) // Se a posição for diferente da que está passando, ocorre a troca;
        {
            vTroca         = numeros[vAux];
            numeros[vAux]   = numeros[vMenor];
            numeros[vMenor] = vTroca;
            *MOVIMENTACAOGLOBAL+=1;
        }
    }
}


#endif

