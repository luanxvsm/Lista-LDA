#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("O número lido foi %d e ele é par", &num);
    } else{
        printf("O número lido foi %i e ele não é par", &num);
    }
}
