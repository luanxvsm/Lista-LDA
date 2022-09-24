/*
6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if" ou o operador de condição "?". 
*/

#include <stdio.h>

int main(){
  int i, preco, infla;
  
  printf("Digite o preço do produto: ");
  scanf("%d", &preco);
  
  for(i=0; i<1 && preco < 100; i++){
      infla = preco + (preco * 0.1);
      printf("O preço inflacionou em 10 por cento e o preço do produto agora é: R$%d", infla);
  }
  
  for(i=0; i<1 && preco >= 100; i++){
      infla = preco + (preco * 0.2);
      printf("O preço inflacionou em 20 por cento e o preço do produto agora é: R$%d", infla);
  }
}