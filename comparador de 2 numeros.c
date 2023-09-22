#include <stdio.h>

int main (){
	
	int n1;
	int n2;
	int r;
	
	printf(" insira o primeiro numero:\n");
	scanf("%d", &n1);
	
	printf(" insira o segundo numero:\n");
	scanf("%d", &n2);
	
	if( n1 > n2 ){ 
	
	printf(" o maior numero : %d", n1); 
		
	}
	
	else if(n1 < n2){ 
	
	printf("o maior numero : %d", n2);
	
	}
	
	else if( n1 = n2){
		
		printf(" eles sao iguais.");
		
	}
	
	else { 
	
	printf(" valor invalido.");
	 
	}
	
}
