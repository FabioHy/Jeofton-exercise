#include <stdio.h>
#include <conio.h>

/* 3) Escreva um programa que leia um número na base decimal e em seguida imprima esse
mesmo número nas bases octal e hexadecimal. */

int main(){
	
	int num;
	
	printf("Digite um numero para conversao em octa e hexadecimal: ");
	scanf("%d", &num);
	
	printf("\nDecimal: %d\n", num);
	printf("Octal: %o\n", num);
	printf("Hexadecimal (Minusculo): %x\n", num);
	printf("Hexadecimal (Maiusculo): %X\n", num);
}