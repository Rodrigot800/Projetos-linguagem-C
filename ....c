#include <stdio.h>

int main(){
	
	int dado = 10;
	
	printf("digite um valor de 1 e 10:\n");
	scanf("%d", &dado);
	
	//x pertence [1, 10]
	if (dado >=1 && dado <=10){
		printf("valor correto.\n");
	} else {
		printf("valor incorreto.\n");
		
		system("pause");
		
	}
	
	
	
	}
