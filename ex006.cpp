#include <stdio.h>
#include <string.h>

int main(){
	char palavra1[256], palavra2[256];
	int ret;
	
	printf("Digite a primeira palavra: ");
	scanf("%s", palavra1);
	printf("Digite a segunda palavra: ");
	scanf("%s", palavra2);
	
	ret = strcmp(palavra1, palavra2);
	if(ret == 0){
		printf("Palavras Iguais\n");
	}else if(ret < 0){
		printf("A primeira e maior que a segunda \n");
	} else{
		printf("A segunda e maior que a primeira");
	}
}
