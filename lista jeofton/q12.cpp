#include <stdio.h>

/* 12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem é o mais velho. 
	Considere que essas pessoas possuem idades diferentes. */

int main(){
	
	int agePedro, ageJoana, ageIsmael;
	
	while(1){
		printf("Digite a idade de Pedro: ");
		scanf("%d", &agePedro);
		
		printf("Digite a idade de Joana: ");
		scanf("%d", &ageJoana);
		
		printf("Digite a idade de Ismael ");
		scanf("%d", &ageIsmael);
		
		if (agePedro > ageJoana and agePedro > ageIsmael){
			printf("\nPedro e o mais velho");
			return 0;
			
		} else if (ageJoana > agePedro and ageJoana > ageIsmael){
			printf("\nJoana e a mais velha");
			return 0;
			
		} else if (ageIsmael > agePedro and ageIsmael > ageJoana){
			printf("\nIsmael e o mais velho");
			return 0;
		} else{
			printf("\nDois ou mais sao mais velhos, por favor, informe idades diferentes.\n\n");
		}
	}
	
}