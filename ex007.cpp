#include <stdio.h>
#include <locale.h>

union documento{
	char cpf[11];
	char cnpj[14];
};

int main(){
	setlocale(0, "Portuguese");
	
	union documento doc;
	
	printf("Informe um CPF com 11 dígitos: ");
	scanf("%11s", &doc.cpf);
	printf("O CPF informado foi: %s\n", doc.cpf);
	
	printf("Informe um CNPJ com 14 dígitos: ");
	scanf("%14s", &doc.cnpj);
	printf("O CNPJ informado foi: %s", doc.cnpj);
}