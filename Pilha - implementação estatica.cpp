#include <stdio.h>
#define MAX 50

#define true 1
#define false 0
typedef int bool;
//caso o problema continue, tente usar o c�digo em C++

typedef int TIPOCHAVE;

typedef struct {
	TIPOCHAVE chave;
} REGISTRO;

typedef struct {
	REGISTRO A[MAX];
	int topo;
} PILHA;

//INICIALIZAR PILHA
//a posi��o inicial da pilha � -', ja que o topo � 0
//-1 sugnifica que a pilha esta vazia

void incializarPilha(PILHA *p) {
	p->topo = -1;
}

//RETORNAR N�MERO DE ELEMENTOS
int tamanhoPilha(PILHA *p) {
	return p->topo+1;
}
//EXIBI��O/IMPRESS�O
void exibirPilha(PILHA *p) {
	printf("Pilha: \" ");
	int i;
	for (i=p->topo;i>=0;i--) {
		printf("%i ", p->A[i].chave);
	}
	printf("\"\n");
	
}

//FUN��O DE INSER��O DE UM ELEMENTO(push)
bool inserirElementoPilha(PILHA *p, REGISTO reg){
	if (p->topo >= MAX-1) return false;
	p->topo = p->topo+1;
	p->A[p->topo] = reg;
	return true;
}

//EXCLUS�O DE UM ELEMENTO(pop)
bool excluirElementoPilha(PILHA *p, REGISTRO *reg) {
	if (p->topo == -1) return false;
	*reg = p->A[p->topo];
	p->topo = p->topo-1;
	return true;
}

//REINICIALIZAR PILHA
void reinializarPilha(PILHA *p) {
	p->topo = -1;
}


