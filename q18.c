/*18) Faça um programa C que leia dez números que representam as notas de dez 
alunos de uma disciplina. As notas variam de zero até dez (0 a 10). O programa 
deve validar a entrada de dados e obter: a soma das notas, a média das notas, 
a maior nota, a menor nota. Assuma que as notas são informadas corretamente no 
intervalo de 1 a 10. */

#include <stdio.h>

int main()
{
    int i, nota, soma, media, maior, menor;
    
    for(i=1; i<=10; i++){
        printf("Digite a nota: ");
        scanf("%d", &nota);
    }
    soma += nota;
    media = soma/10;
    
    printf("A soma das notas é: %d\n", soma);
    printf("A média das notas é: %d\n", media);
}
