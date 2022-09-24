/*
7) Implemente um programa que solicita as notas das duas provas feitas por cada 
um dos alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime 
para cada um a média das notas. O programa deve parar imediatamente após ter sido 
digitado o valor 50 para nota da primeira prova. 
*/

#include <stdio.h>

int main(){
    int nota1, nota2; 
    float media;
    
    while(nota1 != 50){
        printf("Digite a nota da sua primeira prova: ");
        scanf("%d", &nota1);
        printf("Digite a nota da sua segunda prova: ");
        scanf("%d", &nota2);
        
        media = (nota1 + nota2) / 2;
        printf("A sua média é: %.2f\n", media);
    }
}