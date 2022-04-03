#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mudanca_tamanho();

int main(int argc, char** argv) {
	
	int tamanho = 5, valor;
	
	printf("Tamanho original: %d\n", tamanho);
	printf("Digite um valor para a soma: ");
	scanf("%d%*c", &valor);
	
	mudanca_tamanho(&tamanho, valor);
	printf("\nTamanho novo: %d", tamanho);
	
	return 0;
}

void mudanca_tamanho (int *tamanho, int num) {
	*tamanho = *tamanho + num;
}
