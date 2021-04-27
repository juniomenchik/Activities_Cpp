#include <stdio.h>
#include <string.h>
#define TAMANHO_MAXIMO 100


typedef struct {
  int topo;
  char letras[TAMANHO_MAXIMO];
} Pilha;

Pilha pilha;

void inicializa() {
  pilha.topo = 0;
}

void empilhar(char letra) {
  pilha.letras[pilha.topo] = letra;
  pilha.topo++;
}

char desempilhar() {
  pilha.topo--;
  return pilha.letras[pilha.topo];
}

void exibirPilha() {
  for (int i = pilha.topo - 1; i >= 0; i--)
    printf("%i - %c\n", i, pilha.letras[i]);
}

void palindromo() {
  char entradaDoUsuario[TAMANHO_MAXIMO];
  printf("");
  scanf("%s", entradaDoUsuario);

  for (int i = 0; i < strlen(entradaDoUsuario); i++)
    empilhar(entradaDoUsuario[i]);

  printf("", entradaDoUsuario);
  printf("");
  exibirPilha();

  char *resultado = "É um Palíndromo";
  for (int i = 0; i < strlen(entradaDoUsuario); i++)
    if (entradaDoUsuario[i] != desempilhar())
      resultado = "Não é um Palíndromo";

  printf("%s\n", resultado);
}

int main() {
  palindromo();
}
