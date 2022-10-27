#include <stdio.h>

struct ponto{
	int x;
	int y;
};

int main(){
	struct ponto meuPonto;
	
	meuPonto.x = 12;
	meuPonto.y = 35;
	
	printf("meu ponto x = %d\n", meuPonto.x);
	printf("meu ponto y = %d\n", meuPonto.y); 
}