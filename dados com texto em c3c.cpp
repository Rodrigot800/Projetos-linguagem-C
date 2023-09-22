#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char origem[N] = {"olá, mundo!"};
	char destino[N];
	
	printf("antes de strcpy:\n\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem);
	
	printf("depois do sctrcpy: \n\n");
	puts(origem);
	puts(destino);
		
}
