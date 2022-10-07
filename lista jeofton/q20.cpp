#include <stdio.h>
#include <string.h>

/* 20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. */

int main(){
	
	char nome1[30], nome2[30];
	int aux;
	
	printf("Digite um nome: ");
	scanf("%s", &nome1);
	printf("Digite outro nome: ");
	scanf("%s", &nome2);
	
	aux = strcmp(nome2, nome1);
	
	if(aux == 1){
		printf("\n%s\n%s", nome1, nome2);
	} else{
		printf("\n%s\n%s", nome2, nome1);
	}
	
	return 0;
}
