#include <stdio.h>
#include <string.h>

int main()
{
char nome[] = {' '};
int contador=0, contadorA=0, contadorB=0, contadorC=0, i;

printf("Digite seu nome completo: \n");
scanf("%[ -Ý]", nome);

printf("%s\n", nome);

while(nome[i] != '\0'){
	if(nome[i] == 'a'){
		contadorA++;
	} else if(nome[i] == 'b'){
		contadorB++;
	}else if(nome[i] == 'c'){
		contadorC++;
	} else{
		contador++;
	}
	i++;
}
printf("A quantidade de letras A no seu nome e: %d\n", contadorA);
printf("A quantidade de letras B no seu nome e: %d\n", contadorB);
printf("A quantidade de letras C no seu nome e: %d\n", contadorC);
printf("A quantidade de outras letras no seu nome e: %d", contador);
}