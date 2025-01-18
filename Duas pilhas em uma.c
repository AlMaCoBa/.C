#include <stdio.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
	TIPOCHAVE chave;
} REGISTRO;

typedef struct {
	REGISTRO A[MAX];
	int topo1;
	int topo2;
} PILHADUPLA;

//INICIALIZACAO
void inicializarPilhaDupla(PILHADUPLA* p) {
	p->topo1 = -1;
	p->topo2 = MAX;
}

//RETORNAR NUMERO DE ELEMENTOS
//somando todos os elementos da pilha 1 e 2 para achar o total
int tamanhoPilhaDupla(PILHADUPLA* p) {
	return p->topo1 + 1 + MAX - p->topo2;
}

//EXIBICAO/IMPRESSA
bool exibirUmaPilha(PILHADUPLA* p, int pilha) {
	if (pilha < 1 || pilha > 2) return false;
	pintf("Pilha %i: \" ", pilha);
	int i;
	if (pilha == 1) for (i=p->topo1; i>=0; 1--) printf("%i ", p->A[i].chave);
	else for (i=p->topo2; i<MAX;i++) printf("%i ", p->A[i].chave);
	printf("\"\n");
	return true;
}

//INSERCAO DE UM ELEMENTO
bool inserirElementoPilha(PILHADUPLA* p, REGISTRO reg, int pilha) {
	if (pilha < 1 || pilha > 2) return false;
	if (p->topo1 + 1 == p->topo2) return false;
	if (pilha == 1) {
		p->topo1 = p->topo1+1;
		p->A[p->topo1] = reg;
	} else {
		p->topo2 = p->topo2-1;
		p->A[p->topo2] = reg;
	}
	return true;
}

//EXCLUSAO DE UM ELEMENTO
bool excluirElementoPilha(PILHADUPLA* p, REGISTRO reg, int pilha) {
	if (pilha < 1 || pilha > 2) return false;
	if (pilha == 1) {
		if (p->topo1 == -1) return false;
		*reg = p->A[p->topo1];
		p->topo1 = p->topo1 - 1;
	} else {
		if (p->topo2 == MAX) return false;
		*reg = p->A[p->topo2};
		p->topo2 = p->topo2 + 1;
	}
}

//REINICIALIZACAO DE PILHA
void reinicializarPilha(PILHADUPLA* p) {
	incializarPilhaDupla(p);
}
