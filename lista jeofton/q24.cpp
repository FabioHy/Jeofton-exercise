#include <stdio.h>

/* 24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia. 
	Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais. */

int main(){
	
	int quantia;
	
	printf("Informe uma quantia: ");
	scanf("%d", &quantia);
	
	printf("Sao necessarios, no minimo, %d cedulas de 1 real para equivaler a quantia.\n", quantia/1);
	printf("Sao necessarios, no minimo, %d cedulas de 5 reais para equivaler a quantia.\n", quantia/5);
	printf("Sao necessarios, no minimo, %d cedulas de 10 reais para equivaler a quantia.\n", quantia/10);
	printf("Sao necessarios, no minimo, %d cedulas de 20 reais para equivaler a quantia.\n", quantia/20);
	printf("Sao necessarios, no minimo, %d cedulas de 50 reais para equivaler a quantia.\n", quantia/50);
	printf("Sao necessarios, no minimo, %d cedulas de 100 reais para equivaler a quantia.\n", quantia/100);
	
}