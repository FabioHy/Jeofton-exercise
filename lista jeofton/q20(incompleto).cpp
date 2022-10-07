#include <stdio.h>
#include <string.h>

int main(){
	
	char nome1[30], nome2[30];
	
	printf("Digite um nome: ");
	scanf("%s", &nome1);
	printf("Digite outro nome: ");
	scanf("%s", &nome2);
	
	printf("%s\n", nome1);
	printf("%s", nome2);
}