#include <stdio.h>

#define texto "entrada de dados\n\n"

int main(){
	printf("%s", texto);
	 
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("digite a idade:\n");
	scanf("%d", &idade);
	
	printf("digite a altura:\n");
	scanf("%f", &altura);

	printf("digite seu nome:\n");
	scanf("%s", &nome);
	
	printf("dados informados:\n\n");
	printf("idade: %d.\n\n", idade);
	printf("altura: %.2f.\n\n", altura);
	printf("nome: %s.\n\n", nome);
	
	system("pause");
}

