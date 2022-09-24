/*
8) Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número
máximo (no exemplo, 9). Este número deve ser sempre ímpar. 
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/

#include <stdio.h>

int main(){
    int num, i, l; 
    
    printf("Digite o número maximo que você quer que o programa mostre: ");
    scanf("%d", &num);
    
    if (num % 2==0){
       printf("Número inválido, digite um número ÍMPAR!!!!\n");
    } else{
        for( i = 0; i<= (num / 2) + 1; i++){
            for (l=i+1; l<=num-i; l++ ){
                printf("%d ", l);
            }
            printf("\n");
            for (l=0; l<(i+1)*2; l++){
              printf(" ");
            }
         }
    }
}