#include <stdio.h>

struct loja{
	char nome[256];
	char cidade[256];
	float faturamento;
};

int main(){
	struct loja minhaLoja;
	
	printf("Digite nome, cidade e faturamento da loja: ");
	scanf("%s %s %f", &minhaLoja.nome, &minhaLoja.cidade, &minhaLoja.faturamento);
	
	printf("Os dados informados são: %s, %s e %.2f\n", minhaLoja.nome, minhaLoja.cidade, minhaLoja.faturamento);
}