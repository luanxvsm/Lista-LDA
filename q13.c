/*13)Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um.*/

#include <stdio.h>

int main()
{
    int i, num;
    
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        if(i%2 != 0){
            printf("%d - ", i);
        }
    }
}