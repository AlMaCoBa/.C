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


 













