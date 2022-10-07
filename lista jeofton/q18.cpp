#include <stdio.h>

/* 18) Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma que as notas são informadas corretamente no intervalo de 1 a 10. */

int main(){
	
	float nota[10], soma, media, maiorNota, menorNota;
	int i;
	
	//Entrada da primeira nota
	while(1){
		printf("Digite uma nota: ");
		scanf("%f", &nota[0]);
		//condicao de saída do while infinito
		if(nota[0] > 0 and nota[0] < 11){
				break;
			} else{
				printf("\nA nota precisa estar no intervalo de 1 a 10\n\n");
			}
	}
	
	//atribuicao da primeira nota às variaveis
	soma = nota[0];
	maiorNota = nota[0];
	menorNota = nota[0];
	
	//Entrada do resto das notas
	for(i = 1; i < 10; i++){
		while(1){
			printf("Digite outra nota: ");
			scanf("%f", &nota[i]);
			//condicao de saída do while infinito
			if(nota[i] > 0 and nota[i] < 11){
				break;
			} else{
				printf("\nA nota precisa estar no intervalo de 1 a 10\n\n");
			}
		}
		
		//resto das atribuicoes
		soma = soma + nota[i];
		if(nota[i] > maiorNota){
			maiorNota = nota[i];
		}
		if(nota[i] < menorNota){
			menorNota = nota[i];
		}
	}
	
	media = soma/10;
	
	//Saida
	printf("\nSoma das notas: %.1f", soma);
	printf("\nMedia das notas: %.1f", media);
	printf("\nMaior nota: %.1f", maiorNota);
	printf("\nMenor nota: %.1f", menorNota);
	
}