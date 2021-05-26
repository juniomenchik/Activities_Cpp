#include <stdio.h>
#include <stdlib.h>
 
// Define uma constante
// Define a constant
#define MAX 8
 
// Protótipo da função de ordenação
// Ordination function prototype
void quick_sort(int *a, int left, int right, int *contador);
 
// Função main
// Main Function
int main(int argc, char** argv)
{
 int i, vet[MAX];
 int contador=0;
 // Lê MAX ou 10 valores
 // Read MAX or 10 values
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 
 // Ordena os valores
 // Order values
 quick_sort(vet, 0, MAX - 1,contador);
 
 // Imprime os valores ordenados
 // Print values in order ascendant
 printf("Valores ordenados \n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d \n", vet[i]);
 }
 
 printf("Contador = %d",contador);
 
 
 system("pause");
 return 0;
}
 
// Função de Ordenação por Seleção
// Quick sort function
void quick_sort(int *a, int left, int right,int *contador) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
            contador++;
        }
        while(a[j] > x && j > left) {
            j--;
            contador++;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
            contador++;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j,contador);
    }
    if(i < right) {
        quick_sort(a, i, right,contador);
    }
}
