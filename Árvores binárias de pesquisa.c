#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct aux {
	TIPOCHAVE chave;
	/* dados armazenados vao aqui*/
	struct aux *esq, *dir;
} NO;

typedef NO* PONT;

//INICIALIZACAO DA ARVORE
/*mais facil inicializar com NULL para qualquer alteracao ou
insercao futuras*/
PONT inicializar() {
	return(NULL);
}

int main() {
	PONT r = inicializar();
}

//INSERCAO
/*sempre a insercao deve ser analisada o tamanho do numero a ser
inserido, se for maior que o no raiz, sera a direita, caso seja
menor sera aa esquerda do no, e assim, mantendo o padrao para as
raizes ou insercao em folhas*/
//se a raiz for nu, inserimos la
PONT adiciona(PONT* raiz, PONT* no) {
	if (raiz == NULL) return(no);
	if (no->chave < raiz->chave) raiz->esq = adiciona (raiz->esq, no);
	 else raiz->dir = adiciona(raiz->dir, no);
	 /*ignoro chave igual*/
	 return(raiz);
}

PONT adiciona(PONT* raiz, PONT no) {
}

int main() {
	PONT r = inicializa();
	
	PONT no = criaNovoNo(23);
//numero imaginario
	r = adicionar(r,no);
}

PONT criaNovoNo(TIPOCHACE ch) {
	PONT novoNo = (PONT)malloc(sizeof(NO));
	novoNo->esq = NULL;
	novoNo->dir = NULL;
	novoNo->chave = ch;
	return(novoNo);
}
//BUSCA
PONT contem(TIPOCHAVE ch, PONT raiz) {
	if (raiz == NULL) return(NULL);
	if (raiz->chave == ch) return(raiz);
	if (raiz->chave>ch) return(contem(ch,raiz->esq));
	return(contem(ch,raiz->dir));
}
int main(){
	PONT p = contem(12,r)
}

//CONTAGEM DE ELEMENTOS
int numeroNos(PONT raiz) {
	ir (!raiz ) return 0;
	return(numeroNos(raiz->esq) + 1 + numeroNos(raiz->dir));
}
int main() {
	PONT r = inicializa();
	printf("%d\n", numeroNos(r));
}

//LEITURA
void exibirArvore(PONT raiz) {
	if (raiz != NULL) {
		printf("%i",raiz->chave);
		printf("(");
		exibirArvore(raiz->esq);
		exibirArvore(raiz->dir);
		printf(")");
	}
}

//REMOCAO
//METODO AUXILIAR
/*busca binaria nao recursiva. devolve o ponteiro do no
buscado. abastece o pai com o ponteiro para o no pai deste*/
PONT busca(PONT raiz, TIPOCHAVE ch, PONT *pai) {
	PONT atual = raiz;
	*pai = NULL;
	while (atual) {
		if(atual->chave == ch) return(atual);
		*pai = atual;
		if(ch < atual->chave) atual = atual->esq;
		else atual = atual->dir;
	}
	return (NULL);
}
//removendo no
PONT removeNo(PONT raiz, TIPOCHAVE ch) {
	PONT pai, no, p, q;
	no = buscaNo(raiz, ch, &pai);
	if (no==NULL) return(raiz);
	if (!no->esq || !no->dir) {
		if (!no->esq) q = no->dir;
		else q = no->esq;
	}
	else {
		p = no;
		q = no->esq;
		while (q->dir) {
			p = q;
			q = q->dir;
		}
		if (p != no) {
			p->dir = q->esq;
			q->esq = no->esq;
		}
		q->dir = no->dir;
	}
	if (!pai) {
		free(no);
		return(q);
	}
	if(ch < pai->chave) pai->esq = q;
	else pai->dir = q;
	free(no);
	return(raiz);
}

















