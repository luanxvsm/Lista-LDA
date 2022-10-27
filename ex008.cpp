#include <stdio.h>
#include <locale.h>

union patrim{
	long nro_id;
	char char_id[20];	
};

int main(){
	setlocale(0, "Portuguese");
	
	union patrim mobilia;
	int 		 tipo_placa;
	
	printf("Informe o tipo da placa de patrimônio(1 - numérico\t0 - alfanumérico)\n");
	scanf("%d", &tipo_placa);
	
	if(tipo_placa == 1){
		printf("Mobília com placa numérica\n");
		scanf("%d", &(mobilia.nro_id));
		printf("\nA mobília tem placa numérica %d\n", mobilia.nro_id);
	}else{
		printf("Mobília com placa alfanumérica\n");
		scanf("%s", &(mobilia.char_id));
		printf("A mobília tem placa alfanumérica %s\n", mobilia.char_id);
	}
}