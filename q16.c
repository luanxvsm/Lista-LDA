/*16) Dados um número natural n, exiba seu fatorial n!. */

#include <stdio.h>

int main()
{
   int n, fat;
   
   printf("Digite um número natural: ");
   scanf("%d", &n);
   
   for(fat=1; n>1; n = n - 1){
       fat = fat * n;
   }
   printf("\nO número fatorial desse número é: %d", fat);
}