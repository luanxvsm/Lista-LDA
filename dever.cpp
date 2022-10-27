#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, num1, num2;

    do {
        printf("\n+ - Soma\n- - Subtracao\n* - Multiplicacao\n/ - Divisao\n");
        scanf("%d", &opcao);

        if(opcao = '+'){
            printf("Digite dois valores: ");
            scanf("%d%d",&num1, &num2);
        }
        else if(opcao = '-'){
            printf("Digite dois valores: ");
            scanf("%d%d",&num1, &num2);
        }
        else if(opcao = '*'){
            printf("Digite dois valores: ");
            scanf("%d%d",&num1, &num2);
        }
        else if(opcao = '/'){
            printf("Digite dois valores: ");
            scanf("%d%d",&num1, &num2);
        }
      
      
       switch(opcao) {
        
        case '+':
            printf("Soma: %d\n", num1 + num2);
            break;
        case '-':
            printf("Subtracao: %d\n", num1 - num2);
            break;
        case '*':
            printf("Multiplicacao: %d\n", num1 * num2);
            break;
        case '/':
            while(num2 == 0) {
                printf("Nao existe divisao por zero.
			    \nDigite outro valor: ");
                scanf("%d", &num2);
            }
            printf("Divisao: %d\n", num1 / num2);
            break;
        default:
            printf("Opcao inválida.\nDigite outra opcao: ");
        }
    } while(opcao != 0);
}