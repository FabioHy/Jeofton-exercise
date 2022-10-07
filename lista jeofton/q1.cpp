#include <stdio.h>
#include <math.h>

/* 1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo
do primeiro número. */

int main(){
	
	int num1, num2;
	int soma, produtoPrimeiro_QuadradoSegundo, num1_Quadrado, num2_Quadrado;
	int moduloNum1;
	float raizDaSomaDosQuadrados, sinNum1_minus_Num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	//Soma dos numeros
	soma = num1 + num2;
	printf("\nA soma dos numeros e: %d", soma);
	
	//Produto do primeiro pelo quadrado do segundo
	produtoPrimeiro_QuadradoSegundo = num1 * pow(num2, 2);
	printf("\n\nProduto do primeiro pelo quadrado do segundo e: %d", produtoPrimeiro_QuadradoSegundo);
	
	//Quadrado do primeiro numero
	num1_Quadrado = pow(num1, 2);
	num2_Quadrado = pow(num2, 2);
	printf("\n\nO quadrado do primeiro numero e: %d", num1_Quadrado);
	
	//Raiz Quadrada da soma dos quadrados
	raizDaSomaDosQuadrados = sqrt(num1_Quadrado + num2_Quadrado);
	printf("\n\nRaiz Quadrada da soma dos quadrados e: %f", raizDaSomaDosQuadrados);
	
	//Seno da diferença do primeiro número pelo segundo
	sinNum1_minus_Num2 = sin(num1 - num2);
	printf("\n\nSeno da diferenca do primeiro numero pelo segundo e: %f", sinNum1_minus_Num2);
	//Modulo do primeiro numero
	moduloNum1 = abs(num1);
	printf("\n\nO modulo do primeiro numero %d", moduloNum1);
}