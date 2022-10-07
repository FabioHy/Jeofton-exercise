#include <stdio.h>
#include <math.h>

/* 2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o
correspondente em Celsius e em Kelvin: */

int main(){
	
	float fahrenheit, celsius, kelvin;
	
	celsius = (fahrenheit - 32) * 5/9;
	kelvin = (fahrenheit - 32) * 5/9 + 273,15;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	printf("Fahrenheit = %f", fahrenheit);
	printf("\nCelsius = %f", celsius);
	printf("\nKelvin = %f", kelvin);
}