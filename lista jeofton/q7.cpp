#include <stdio.h>

/* 7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos alunos
	de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a média das notas.
	O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova. */

int main(){
	
	int nota1, nota2, media;
	int i = 1;
	
	while(nota1 != 50){
		printf("Aluno %d: \n\n", i);
		while(1){
			printf("Informe sua primeira nota: ");
			scanf("%d", &nota1);
			if (nota1 == 50){
				break;
			}
			printf("\nInforme sua segunda nota: ");
			scanf("%d", &nota2);
			
			if (nota1 <= 10 and nota1 > 0 and nota2 <= 10 and nota2 > 0){
				break;
			}
			
			printf("Por favor, digite notas em um intervalo de 0 a 10\n");
		}
		
		if(nota1 == 50){
			printf("Programa Finalizado.");
			break;
		}
		
		media = (nota1+nota2)/2;
		printf("\nMedia do aluno: %d\n\n", media);
		i++;
		
	}
	return 0;
}