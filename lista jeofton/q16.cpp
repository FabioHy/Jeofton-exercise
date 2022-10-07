#include <stdio.h>

/* 16) Dados um número natural n, exiba seu fatorial n!. */

int main(){
	
	int num, i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	for(i = num-1; i > 1; i--){
		
		num = num * i;
		
	}
	
	printf("\nO fatorial desse numero e: %d", num);
}