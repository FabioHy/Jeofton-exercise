#include <stdio.h>
#include <math.h>

/* 14) A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura em Celsius e Tf em Fahrenheit.
	Faça um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 1 em 1. */

int main(){
	
	float Tc, Tf;

	
	printf("Celsius    |    Fahrenheit");
	for(Tf = 40; Tf < 76; Tf++){
	
		Tc = (Tf-32)*(5.0/9.0);
	
		printf("\n  %.1f      |      %.1f\n", Tc, Tf);
		printf("           |");
	}
	
}