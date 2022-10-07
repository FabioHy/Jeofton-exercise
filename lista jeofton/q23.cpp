#include <stdio.h>

/* 23) Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, 
	depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados. */

int main(){
	
	int vetor[6], i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &vetor[0]);
	
	for(i = 1; i < 6; i++){
		printf("Digite outro numero inteiro: ");
		scanf("%d", &vetor[i]);
	}
	
	for(i = 5; i != -1; i--){
		printf("%d ", vetor[i]);
	}
}
