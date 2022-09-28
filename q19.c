/*19) Escreva um programa para informar o maior elemento de um vetor de 
5 posições do tipo inteiro.*/

#include <stdio.h>
#define TAM 5

int main(){
	
	int vetor[TAM], i, maior;
	
	for(i=0; i<TAM; i++){
		printf("Digite um valor: ");
		scanf("%i", &vetor[i]);
	}
	
	maior = vetor[0];
	
	for(i=1; i<TAM; i++){
		if (vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	printf("Vetores: ");
	for(i=0; i<TAM; i++){
		printf("%i ",vetor[i]);
	}
	
	printf("\nO maior valor entre os vetores é: %i", maior);
	
}