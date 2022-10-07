#include <stdio.h>

/* 19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro. */

int main(){
	
	int vetor[5], i;
	int maior;
	
	
	printf("Digite um numero: ");
	scanf("%d", &vetor[0]);
	maior = vetor[0];
	
	for(i = 1; i < 5; i++){
		printf("Digite outro numero: ");
		scanf("%d", &vetor[i]);
		
		if (vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	printf("O maior elemento do vetor e o elemento: %d", maior);
	
}