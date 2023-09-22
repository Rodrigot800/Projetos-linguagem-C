#include <stdio.h>

int main(){
	
	 A, B, soma, subtr, mult;
	float divis;
	
	printf(" digite o primeiro valor: \n\n");
	scanf("%f", &A);
	
	printf(" digite o segundo valor: \n\n");
	scanf("%f", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf(" resultado: \n\n");
	printf("soma: %.2f.\n\n", soma);
	printf("subtra.: %.2f.\n\n", subtr);
	printf("multiplic. %.2f.\n\n", mult);
	printf("divis.: %.2f.\n\n", divis);
	
	system("pause");
	
}


