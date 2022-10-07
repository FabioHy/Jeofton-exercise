#include<stdio.h>
#include<stdlib.h>

/*Faca um programa que apresenta a seguinte saída, perguntando ao usuário o
número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
       1 2 3 4 5 6 7 8 9
         2 3 4 5 6 7 8  
           3 4 5 6 7 
             4 5 6 
               5 */

int main () {

    int num, i, x, y;

    printf("Digite o numero maximo: \n");
    printf("\nAtencao, o numero deve ser impar.\n");
    scanf("%d", &num);
	printf("\n");
	
    if (num % 2 ==0)
       printf("\nNumero invalido.\n");

    else{
         y = (num - 1)/2;
         
         for( i=0; i<= y; i++){
         	
              for (x=i+1; x<=num-i; x++){
                  printf(" %d",x);
              }
              printf("\n ");
         }                  
    }

return 0;
} 