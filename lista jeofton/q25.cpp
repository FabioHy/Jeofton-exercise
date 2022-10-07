#include <stdio.h>
#include <string.h>

/* 25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos. */

int main(){
	int numero[10], i, x = 0;
	float media;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero[0]);
	
	for(i = 1; i < 10; i++){
		printf("Digite outro numero inteiro: ");
		scanf("%d", &numero[i]);
	}
	
	media = (numero[0] + numero[1] + numero[2] + numero[3] + numero[4] + numero[5] + numero[6] + numero[7] + numero[8] + numero[9])/10;

	for(i = 0; i < 10; i++){
		if(numero[i] == media){
			printf("O numero %d que foi %do valor informado, e igual a media de todos eles\n", numero[i], i+1);
			x++;
		}
	}
	
	if(x = 0){
		printf("Nenhum dos valores inteiros digitados e igual a media.");
	}
}