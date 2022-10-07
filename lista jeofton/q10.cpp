#include <stdio.h>

/* 10) Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar. 
	O programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 
	ou se o número é ímpar, caso afirmativo informar se é ou não menor que 50. */

int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("Numero Par e ");
		if(num > 15){
			printf("maior que 15.");
		} else{
			printf("menor que 15.");
		}
	}else{
		printf("Numero impar e ");
		
		if(num > 50){
			printf("maior que 50.");
		} else {
			printf("menor que 50.");
		}
	}
	
}