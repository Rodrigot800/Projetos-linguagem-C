#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	float red, mat, nat, ling, hum, res, res2;
	
	printf("digite sua nota em reda��o:\n");
	scanf("%f", &red);
	printf("digite sua nota em matematica:\n");
	scanf("%f", &mat);
	printf("digite sua nota em natureza:\n");
	scanf("%f", &nat);
	printf("digite sua nota em linguagem:\n");
	scanf("%f", &ling);
	printf("digite sua nota em humanas:\n");
	scanf("%f", &hum);
	
	res = (red + mat + nat + ling + hum) / 5;
	
	res2 = res * 110/100;
	
	printf(" m�dia : %.3f", res);
	printf(" m�dia com 10% : %.3f", res2);
	
}
