#include <stdio.h>
#include <locale.h>

enum dia_semana {
	domingo = 1,
	segunda = 2,
	terca = 3,
	quarta = 4,
	quinta = 5,
	sexta = 6,
	sabado = 7
};

int main() {
	setlocale(LC_ALL, "Portuguese");

	enum dia_semana d_semana;

	printf("Digite o dia da semana: \n 1 - domingo\n 2 - segunda\n 3 - terca\n 4 - quarta\n 5 - quinta\n 6 - sexta\n 7 - sabado\n");
	scanf("%d", &d_semana);

	switch(d_semana) {
		case domingo:
			printf("Dia informado foi domingo");
			break;
		case segunda:
			printf("Dia informado foi segunda");
			break;
		case terca:
			printf("Dia informado foi terca");
			break;
		case quarta:
			printf("Dia informado foi quarta");
			break;
		case quinta:
			printf("Dia informado foi quinta");
			break;
		case sexta:
			printf("Dia informado foi sexta");
			break;
		case sabado:
			printf("Dia informado foi sabado");
			break;
		default:
			printf("Dia informado inválido\n");
	}
}