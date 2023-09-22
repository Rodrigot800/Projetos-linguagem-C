#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float comprimento = 0.0,
          largura = 0.0,
		   altura = 0.0,
		   volume = 0.0;
	
	printf("CALC_volume\n\n");
	printf("autor: rodrigo da silva peixoto, futuro eng. de software\n\n ");
	
	printf("digite a comprimento da base :");
	scanf("%f",&comprimento);
	printf("\n\n");
	
	printf("digite a largura:");
	scanf("%f",&largura);
	printf("\n\n");
	
	printf("digite a altura :");
	scanf("%f",&altura);
	printf("\n\n");
	
	volume = (comprimento*largura*altura)/3;
	
	printf("comprimento = %.2f\n\n",comprimento);
	printf("largura = %.2f\n\n",largura);
	printf("altura = %.2f\n\n", altura);
	printf("o volume da piramede em metros cubicos = %.2f\n\n", volume);
	
	
	system("pause");
	return 0;
}
