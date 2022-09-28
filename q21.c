/*21) Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses
números em pares e ímpares e os armazenem em dois outros vetores separando pares e
ímpares, exibindo os resultados na tela.*/

#include <stdio.h>

int main(){
    int par[12],impar[12];
    int num,contpar=0,contimpar=0;

    for(int i=0; i<12; i++){
        printf("Digite um número: ");
        scanf("%d", &num);


        if(num%2 == 0){
            par[contpar] = num;
            contpar++;
        }else{
            impar[contimpar] = num;
            contimpar++;
        }
    }

    printf("Ímpares: [");
    for(int i=0; i<contimpar-1; i++){
        printf("%d,", impar[i]);
    }
    printf("%d]\n", impar[contimpar-1]);


    printf("Pares: [");
    for(int i=0; i<contpar-1; i++){
        printf("%d,", par[i]);
    }
    printf("%d]", par[contpar-1]);

}