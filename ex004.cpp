#include <stdio.h>
#include <string.h>

int main()
{
	char nome1[256], nome2[256], nome3[256], nomeCompleto[256];
	printf("Digite seu primeiro nome: ");
	scanf("%s", nome1);
	printf("Digite seu segundo nome: ");
	scanf("%s", nome2);
	printf("Digite seu terceiro nome: ");
	scanf("%s", nome3);
	
	nomeCompleto[0] = '\0';
	strcat(nomeCompleto, nome1);
	strcat(nomeCompleto, " ");
	strcat(nomeCompleto, nome2);
	strcat(nomeCompleto, " ");
	strcat(nomeCompleto, nome3);
	printf("%s\n%s\n%s\n%s", nome1, nome2, nome3, nomeCompleto);
}