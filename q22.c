/*22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em
seguida, o programa deverá apresentar na tela os resultados.*/

#include <stdio.h>

int main(){
    int num[10], soma=0, subtracao=0;

    for(int i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%d", &num[i]);


        if(i%2 == 0){
            soma += num[i];
        }else{
            subtracao -= num[i];

        }
    }
    printf("A soma dos valores em posições pares é %d e a subtração dos valores em posições ímpares é %d", soma, subtracao);
}