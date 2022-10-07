#include <stdio.h>
#include <math.h>

/* 17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. 
	Por exemplo, 1^2=1, 2^2=1+3, 3^2=1+3+5, 4^2=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto. */
	
int main(){
	
	int soma = 0, i = 1, num, stop;
	
	printf("Digite um numero a ser calculado: ");
	scanf("%d", &num);
	
	while(stop != num){
		
		if(i%2 != 0){
			soma = soma + i;
			stop++;
		}
		i++;
	}
	
	printf("Quadrado de %d = %d", num, soma);
	
}