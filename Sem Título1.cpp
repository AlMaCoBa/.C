#include <stdio.h>
#define alturaMaxima 255

typedef struct{
	int peso; //peso em kh
	int altura; //altura em cm
} PesoAltura;

int main () {
	PesoAltura pessoa1;
	pessoa1.peso = 80;
	pessoa1.altura = 185;
	printf("Peso: %i, Altura: %i. ", pessoa1.peso, pessoa1.altura);
	if (pessoa1.altura>alturaMaxima) printf("Altura acima da maxima.\n");
	else printf("Altura abaixo da maxima.\n");
	return 0;
}

