/* 4) Faça um programa que lê dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>

int main(){
    int num1, num2, i;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite mais um número: ");
    scanf("%d", &num2);
    
    if(num1 < num2){
        printf("O primeiro valor é menor e a lista de valores do primeiro até o segundo é: ");
        for(i = num1; i < num2; i++){
            printf("%d - ", i);
        }
    } else if(num2 < num1){
        printf("O primeiro valor é maior e a lista de valores do segundo até o primeiro é: ");
        for(i = num1; i >= num2; i--){
            printf("%d - ", i);
        }
    }else{
        printf("Os valores digitados são iguais!!");
    }
}