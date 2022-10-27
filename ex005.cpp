#include <stdio.h>
#include <string.h>

int main()
{
char nome[256], novaString[256];

printf("Digite seu nome completo: ");
scanf("%[ -Ý]", nome);

strcpy(novaString, nome);

printf("%s\n%s", nome, novaString);
}