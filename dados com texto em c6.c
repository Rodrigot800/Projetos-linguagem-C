#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char hardtext[N] = {"ai pai, para"};
	char senha_puteiro[N];
	int ok;
	
	printf("digite a senha do puteiro :\n\n");
	gets(senha_puteiro);
	
	ok = strcmp(hardtext,senha_puteiro);
	
	if(ok == 0)
	    printf(" correto, entre e divirtase.\n\n ");
	    
	else
	    printf(" errado, corra ou eu te mato.\n\n ");
	
	
}
	
	
