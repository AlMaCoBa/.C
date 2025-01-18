#include <stdio.h>
#include <malloc.h>

typedef int TIPOCHAVE;

typedef struct {
	TIPOCHAVE chave;
	//outros campos...
} REGISTRO;

typedef struct aux {
	REGISTRO reg;
	struct aux* prox;
} ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
	PONT topo;
} PILHA;


//INICIALIZAÇÃO
void inicializarPilha(PILHA* p) {
	p->topo = NULL;
}

//RETORNAR NUMERO DE ELEMENTOS
//não há capo com a contagem de numero de elemento
//teremos que percorrer toda a pilha para a contagem
int tamanho(PILHA * p) {
	PONT end = p->topo;
	int tam = 0
	while (end != NULL) {
		int tam++;
		end = end->prox;
	}
	return tam;
}

//VERIFICAR SE A PILHA ESTA VAZIA
//não usamos a função tamanho pelo motivo de a pilha conter
//muitos elementos vai demorar para a função retornar o valor
//assim verificamos se o endereço vale NULL

bool estaVazia(PILHA* p) {
	if (p->topo ==NULL) return true;
	return false;
}

//EXIBIÇÃO/IMPRESSÃO
void exibirPilha(PILHA* p) {
	PONT end = p->topo;
	printf("Pilha: \" ");
	while (end != NULL) {
		printf("%i ", end->reg.chave);
		end = end->prox;
	}
	printf("\"\n");
}

//INSERÇÃO DE UM ELEMENTO (push)
bool inserirElemPilha(PILHA* p, REGISTRO reg){
	PONT novo = (PONT) malloc(sizeof(ELEMENTO));
	novo->reg = reg;
	novo->prox = p->topo
	p->topo = novo;
	return true;
}

//EXCLUSÃO DE UM ELEMENTO (pop)
bool excluirElemPilha(PILHA *p, REGISTRO* reg) {
	if (p->topo == NULL) return false;
	*reg = p->topo->reg;
	PONT apagar = p->topo;
	p->topo = p->topo->prox;
	free(apagar);
	return true;
}

//REINICIALIZAÇÃO DA PILHA
//exlcuir todos os elementos e colocar NULL no campo topo
void reinicializarPilha(PILHA* p) {
	PONT apagar
	PONT posicao = p->topo;
	while (posicao != NULL) {
		apagar->posicao;
		posicao = posicao->prox;
		free(apagar);
	}
	p->topo = NULL;
}
