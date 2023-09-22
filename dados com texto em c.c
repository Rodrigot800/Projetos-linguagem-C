#include <stdio.h>

int main(){
	
	char s[51];
	
	printf("digite algo (scanf convencional): \n\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("resultado: %s\n\n", s);
	
	printf("digite algo (scanf aprimorado): \n\n");
	scanf("%50[^\n]s",s);
	fflush(stdin);
	
	printf("resultado: %s\n\n", s);
	
	
	
}
