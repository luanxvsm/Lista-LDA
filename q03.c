/*3) Escreva um programa que leia um número na base decimal e em seguida imprima esse 
mesmo número nas bases octal e hexadecimal.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int decimal;
    char b[10];
    
    printf("Digite um número decimal: ");
    scanf("%d", &decimal);
    
    printf("O número convertido para octal é: %o\n", decimal);
    printf("O número convertido para hexadecimal é: %X", decimal);
}
