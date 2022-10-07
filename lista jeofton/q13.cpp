#include <stdio.h>

/* 13) Dado um número positivo, crie um programa que escreva todos os números ímpares menores e/ou iguais a esse número e maiores ou igual a um. */

int main(){
	
	int num, i;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		if(i % 2 != 0){
			printf("%d ", i);
		}
	}
}