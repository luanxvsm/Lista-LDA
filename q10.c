/*
10) Faça um programa que receba um número inteiro e que verifique se esse número 
é par ou ímpar. O programa deve informar se o número é par, caso afirmativo informar 
também se é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se 
é ou não menor que 50.
*/

#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("O número é par!\n");
        if(num > 15){
            printf("O número é maior do que 15");
        } else{
            printf("O número é menor do que 15");
        }
    }else{
        printf("O número é ímpar!\n");
        if(num < 50){
            printf("O número é menor do que 50");
        }else{
            printf("O número é maior do que 50");
        }
    }
}