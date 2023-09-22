#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char s[N];
	int i;
	
	printf("digite um texto: \n\n");
	gets(s);
	i = strlen(s);
	printf("\n tamanho do texto :%d \n\n", i);
	
	printf("impressão de posição em posição \n\n");
	for (i=0; i< strlen(s); i++){
		printf("%c", s[i]);
		
	}
	
	
}

	
	
	
