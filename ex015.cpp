#include <stdio.h>
#include <string.h>

struct dados{
	char nome[124];
	char rua[124];
	int numero;
	char cidade[124];
	char pessoa[124];
	int idade;
};

union dados2{
	char cpf[11];
	char cnpj[14];
};

int main(){
	struct dados m_Dados;
	union dados2 m_Dados2;
	
	printf("Você é uma pessoa física ou jurídica: ");
	scanf("%s", &m_Dados.pessoa);
	
	if(m_Dados.pessoa == "fisica"){
		printf("Digite seu nome, rua, numero da casa, cidade, idade e cpf: ");
		scanf("%s %s %d %s %d %s", &m_Dados.nome, &m_Dados.rua, &m_Dados.numero, &m_Dados.cidade, &m_Dados.idade, &m_Dados2.cpf);
	}else if(m_Dados.pessoa == "juridica"){
		printf("Digite seu nome, rua, numero da casa, cidade, idade e cnpj: ");
		scanf("%s %s %d %s %d %s", &m_Dados.nome, &m_Dados.rua, &m_Dados.numero, &m_Dados.cidade, &m_Dados.idade, &m_Dados2.cnpj);
	}else{
		printf("INVÁLIDO");
	}
}