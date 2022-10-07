#include <stdio.h>

/* 5) Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)
para os códigos de 0 a 127. */

int main(){
	
	int i;
	
	printf("Decimal | Hexadecimal | Charactere\n");
	
	for(i = 0; i < 128; i++){
	printf("   %d    |      %X      |      %c\n", i, i, i);
	}
}