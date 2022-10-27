#include <stdio.h>
#include <string.h>

int main()
{
char nome[] = {' '};

printf("Digite seu nome completo: ");
scanf("%[ -Ý]", nome);

printf("%s", nome);
}