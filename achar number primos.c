#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main( int argc, char *argv[]){
	
	setlocale(LC_ALL, "portuguese");
	
	int vet[9], i, j, cont;
	
	for(j=0; j<9; j++){
		j+1;
		printf("insira um número inteiro %d:\n", j);
	    scanf("%d", &vet[j]);
	    
	}

	for(j=0; j < 9; j++){
		cont = 0;
	for (i = 1; i<=vet[j]; i++){
		if(vet[j] % i == 0){
			cont ++;
		}
	}
	if (cont == 2){
		
		j++;
		
		printf("%d é primo, posição %d. \n", vet[j], j);
			
	}
	
}
	
	system("pause");
	
	return 0;
	
	
	}
