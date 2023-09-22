#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){

	setlocale(LC_ALL, "portuguese");
	
	char s1[N] = {" lógica de "};
	char s2[N] = {"programação!"};
	
	printf("antes do strcat:\n\n");
	printf("str1: %s\n",s1);
	printf("str2: %s\n",s2);
	
	strcat(s1,s2);
	
	printf("depois do strcat : \n\n");
	puts(s1);
		
}
	

	
