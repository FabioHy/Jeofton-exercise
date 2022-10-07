#include <stdio.h>

/* 11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas. 
	Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
	O programa deve verificar se a quantidade de alunos é igual a de alunas. */

int main(){
	
	int M, F, total;
	
	printf("Informe a quantidade de alunas: ");
	scanf("%d", &F);
	
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &M);
	
	total = M + F;
	
	if (M > F){
		printf("A turma possui uma quantidade maior de alunos (sexo masculino)");
	} else if (F > M){
		printf("A turma possui uma quantidade maior de alunas (sexo feminino)");
		printf("\nA turma possui no total %d alunos", total);
	} else {
		printf("A quantidade de alunos e igual a quantidade de alunas.");
	}
}