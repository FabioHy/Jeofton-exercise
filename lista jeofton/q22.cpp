#include <stdio.h>

/* 22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses dez números em um vetor. 
	Para os valores dos elementos inseridos nas posições pares desse vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. 
	Em seguida, o programa deverá apresentar na tela os resultados.*/

int main(){
	
	int IndexPar[5], IndexImpar[5], i, inteiro[10];
	int subIndexImpar, somaIndexPar, aux;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &inteiro[0]);
	
	for(i = 1; i < 10; i++){
		printf("Digite outro numero inteiro: ");
		scanf("%d", &inteiro[i]);
	}
	
	
	printf("\nNumeros nos indices Pares: ");
	aux = 0;
	for(i = 0; i < 10; i++){
		if(i%2 == 0){
			IndexPar[aux] = inteiro[i];
			printf("%d ", IndexPar[aux]);
			aux++;
		}
	}
	
	printf("\nNumeros nos indices Impares: ");
	aux = 0;
	for(i = 0; i < 10; i++){
		if(i%2 != 0){
			IndexImpar[aux] = inteiro[i];
			printf("%d ", IndexImpar[aux]);
			aux++;
		}
	}
	
	somaIndexPar = IndexPar[0] + IndexPar[1] + IndexPar[2] + IndexPar[3] + IndexPar[4];
	subIndexImpar = IndexImpar[0] - IndexImpar[1] - IndexImpar[2] - IndexImpar[3] - IndexImpar[4];
	
	printf("\n\nA soma dos inteiros nos indices pares do vetor e de: %d", somaIndexPar);
	printf("\nA subtracao dos inteiros nos indices impares do vetor e de: %d", subIndexImpar);
}

