#include <stdio.h>

int main(){
	char s[10];
	
	printf("digite algo ( leitura pelo gets): \n\n");
	gets(s);
	fflush(stdin);
	
	puts("resultado:");
	puts(s);
	puts("");
	
	printf("digite algo ( leitura pelo fgets):\n\n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("resultado:");
	puts(s);
	
}
