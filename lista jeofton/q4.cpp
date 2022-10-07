#include <stdio.h>

/*
4) Faça um programa que lê dois valores e imprime:

a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".

obs: a) e b) possuem condicoes iguais, entao alterei a condicao da letra b) na linha 27 */

int main(){
	
	int num[2];
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num[0]);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num[1]);
	
// a) se o primeiro valor for menor que o segundo
	if (num[0] < num[1]){
		printf("%d %d", num[0], num[1]);
// b) se o primeiro valor for MAIOR que o segundo
	} else if(num[0] > num[1]){
		printf("%d %d", num[1], num[0]);
// c)
	} else{
		printf("Valores iguais");
	}
	
}