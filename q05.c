/*5) Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)
para os códigos de 0 a 127.*/

#include <stdio.h>

int main(){
    int i;
    
    for(i = 0; i < 128; i++){
        printf("%c\n", i);
    }
}