#include <stdio.h>

struct matriz{
	//num_matriz = 0;
	char nome_matriz[124];
	char endereco_matriz[124];
	float faturamento;
};

struct filial{
	//num_filial = 1;
	char nome_filial[124];
	char endereco_filial[124];
	float faturamento2;
};

int main(){
	int num;
	
	struct matriz m_Matriz;
	struct filial m_Filial;
	
	printf("Digite a loja que você deseja digitar as informações: (0 para matriz e 1 para filial)");
	scanf("%d", &num);
	
	if(num==0){
		printf("Digite nome, endereço e faturamento da loja matriz");
		scanf("%s %s %f", &m_Matriz.nome_matriz, &m_Matriz.endereco_matriz, &m_Matriz.faturamento);
		printf("Os dados da loja matriz são: %s, %s e %.2f\n", m_Matriz.nome_matriz, m_Matriz.endereco_matriz, m_Matriz.faturamento);
	}else if(num==1){
		printf("Digite nome, endereço e faturamento da loja filial");
		scanf("%s %s %f", &m_Filial.nome_filial, &m_Filial.endereco_filial, &m_Filial.faturamento2);
		printf("Os dados da loja filial são: %s, %s e %.2f\n", m_Filial.nome_filial, m_Filial.endereco_filial, m_Filial.faturamento2);
	}else{
		printf("Número digitado inválido");
	}
	
	/*printf("Digite nome, endereço e faturamento da loja matriz");
	scanf("%s %s %f", &m_Matriz.nome_matriz, &m_Matriz.endereco_matriz, &m_Matriz.faturamento);
	
	printf("Digite nome, endereço e faturamento da loja filial");
	scanf("%s %s %f", &m_Matriz.nome_filial, &m_Matriz.endereco_filial, &m_Matriz.faturamento2);
	
	printf("Os dados da loja matriz são: %s, %s e %.2f\n", m_Matriz.nome_matriz, m_Matriz.endereco_matriz, m_Matriz.faturamento);
	printf("Os dados da loja filial são: %s, %s e %.2f\n", m_Matriz.nome_filial, m_Matriz.endereco_filial, m_Matriz.faturamento2);*/
}