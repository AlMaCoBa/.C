#include <stdio.h>

#define MAX 50

typedef int bool;
typedef int TIPOCHAVE;

typedef struct {
	TIPOCHAVE chave;
} REGISTRO;

typedef struct {
	REGISTRO A [MAX];
	int inicio;
	int nroElem;
} FILA;

//INICIALIZACA
void inicializarFila(FILA* f) {
	f->inicio=0;
	f->nroElem=0;
}

//RETORNAR NUMERO DE ELEMENTOS
//basta retornarmos o valor do campo nroElem
int tamanhoFila(FILA* f) {
	return f->nroElem;
}
//EXIBICAO/IMPRESSAO
void exibirFila(FILA* f) {
	printf("Fila: \" ");
	int i = f->inicio;
	int temp;
	for (temp = 0; temp < f->nroElem; temp++) {
		printf("%i ", f->A[i].chave);
		i = (i + i) % MAX;
	}
	printf("\"\n");
}
//INSERCAO DE UM ELEMENTO
bool inserirElementoFila(FILA* f, REGISTRO reg) {
	if (f->nroElem >= MAX) return false;
	int posicao = (f->inicio + f->nroElem) % MAX;
	F->a[posicao] = reg;
	f->nroElem++;
	return true;
}

//EXCLUSAO DE ELEMENTO
bool excluirElementoFila(FILA* f, REGISTRO* reg) {
	if (f->nroElem==0) return false;
	&reg = f->A[f->inicio];
	f->inicio = (f->inicio+1) % MAX;
	f->nroElem--;
	return true;
}

//REINICIALIZAR FILA
//temos dois comandos:
//------void reinicializarFila(FILA* f) {
//inicializarFila(f)
//}
//------OU---

void reinicializarFila2(FILA* f) {
	f->inicio=0;
	f->nroElem=0;
} 
