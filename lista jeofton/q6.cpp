#include <stdio.h>

/* 6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
	OBS: não use o comando "if" ou o operador de condição "?". */

int main(){
	
	float valorProduto, valorInflacionado;
	
	printf("Digite o preco a ser inflacionado: R$ ");
	scanf("%f", &valorProduto);
	
	while(valorProduto < 100){
		valorInflacionado = valorProduto + (valorProduto * 0.10);
		printf("Novo valor inflacionado: R$ %.2f", valorInflacionado);
		break;
	}
	
	while(valorProduto >= 100){
		valorInflacionado = valorProduto + (valorProduto * 0.20);
		printf("Novo valor inflacionado: R$ %.2f", valorInflacionado);
		break;
	}
	return 0;
}