/*1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do 
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada 
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo 
do primeiro número.*/

#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, soma, produto, quadrado, raiz, modulo, soma_dos_quadrados;
    float seno;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    produto = num1 * (num2*num2);
    quadrado = num1*num1;
    soma_dos_quadrados = quadrado + (num2*num2);
    raiz = sqrt(soma_dos_quadrados);
    seno = sin(num1-num2);
    modulo = num1 < 0 ? num1 * -1: num1;
    
    printf("A soma desses números é igual a: %d\n", soma);
    printf("O produto do primeiro número pelo quadrado do segundo é igual a: %d\n", produto);
    printf("O quadrado do primeiro número é igual a: %d\n", quadrado);
    printf("A raiz da soma dos quadrados desses números é igual a: %d\n", raiz);
    printf("O seno da diferença do primeiro número pelo segundo é igual a: %f\n", seno);
    printf("O módulo do primeiro número é igual a: %d\n", modulo);
}