#include <stdio.h>
#include <locale.h>

enum estado_civil{
	casada = 1,
	solteira = 2
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	enum estado_civil e_civil;
	
	printf("Digite 1 para casada e 2 para solteira\n");
	scanf("%d", &e_civil);
	
	switch(e_civil){
		case casada:
			printf("Você é casada\n");
			break;
		case solteira:
			printf("Você é solteira\n");
			break;
		default:
			printf("Nem um nem outro\n");
	}
}