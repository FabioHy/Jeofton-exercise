#include <stdio.h>

/* 21) Escreva um programa que leia doze números do tipo inteiro ao usuário. 
	Separe esses números em pares e ímpares e os armazenem em dois outros vetores separando pares e ímpares, exibindo os resultados na tela. */

int main(){
	
	int Par[12], Impar[12], i, inteiro[12];
	int aux;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &inteiro[0]);
	
	for(i = 1; i < 12; i++){
		printf("Digite outro numero inteiro: ");
		scanf("%d", &inteiro[i]);
	}
	
	printf("\nInteiros Pares: ");
	aux = 0;
	for(i = 0; i < 12; i++){
		if(inteiro[i]%2 == 0){
			Par[aux] = inteiro[i];
			printf("%d ", Par[aux]);
			aux++;
		}
	}
	
	printf("\nInteiros Impares: ");
	aux = 0;
	for(i = 0; i < 12; i++){
		if(inteiro[i]%2 != 0){
			Impar[aux] = inteiro[i];
			printf("%d ", Impar[aux]);
			aux++;
		}
	}
}