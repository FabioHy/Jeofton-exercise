#include <stdio.h>
#include <math.h>

/* 9) Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos exercícios realizados por ele. 
	Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. 
	A partir da média, informar o conceito de acordo com a tabela: 
	
	maior ou igual a 9 A;
	maior ou igual a 7.5 e menor que 9 B;
	maior ou igual a 6 e menor que 7.5 C;
	maior ou igual a 4 e menor que 6 D;
	menor que 4 E; */

int main(){
	
	float nota[3], ME, MA;
	
	printf("Digite suas 3 notas: ");
	scanf("%f %f %f", &nota[0], &nota[1], &nota[2]);
	
	ME = (nota[0] + nota[1] + nota[2])/3;
	MA = (nota[0] + nota[1]*2 + nota[2]*3 + ME)/7;
	
	printf("Sua media foi de: %f", ME);
	printf("\nSua media de aproveitamento foi de: %f\n\n", MA);
	
	if (ME >= 9){
		printf("categoria A");
	} else if (ME >= 7.5 and ME < 9){
		printf("categoria B");
	} else if (ME >= 6 and ME < 7.5){
		printf("categoria C");       
	} else if (ME >= 4 and ME < 6){
		printf("categoria D");     
	} else{
		printf("categoria E"); 
	}
		
		
}