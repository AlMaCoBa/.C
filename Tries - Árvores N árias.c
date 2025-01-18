/*estrutura que come muita memoria, entretanto, eh uma otima ferramenta de busca*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0
#define N_ALFABETO 26

typedef int bool;
typedef bool TIPORET;

typedef struct no {
	struct no *filhos[NO_ALFABETO];
	TIPORET fim;
} NO;

typedef NO* PONT;

//INICIALIZACA
PONT criaNo() {
	PONT p = NULL;
	
	p = (pont)malloc(sizeof(NO));
	if (p) {
		p->fim = false;
		int i;
		for (i=0; I<n_alfabeto; I++)
		P->filha[i] = NULL;
	}
	return(p);
}

PONT inicializa() {
	return(criaNo();)
}

int main() {
	PONT r = inicializa();
}

//MAPEAMENTO
int mapearIndice(char c) {
	return((int)c - (int)'a')
}

void insere(PONT raiz, char *chave) {
	int nivel;
	int compr = strlen(chave);
	int i;
	
	PONT p = raiz;
	for (nivel=0; nivel<compr; nivel++) {
		i = mapearIndice(chave[nivel]);
		if (!p->filhos[i) p->filhos[i] = criaNo();
		p = p->filhos[i];
	}
	p->fim = true;
}

//BUSCA
bool busca(PONT raiz,char *chave) {
	int nivel;
	int compr = strlen(chave);
	int i;
	PONT p = raiz;
	
	for (nivel=0; nivel<compr; nivel++) {
		i = mapearIndice(chave[nivel]);
		if (!p->filhos[i]) return(false);
		p = p->filhos[i]; 
	}
	return(p->fim);
}
























































