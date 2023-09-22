#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main( int argc, char *argv[]){
	
	setlocale(LC_ALL, "portuguese");
	
	 double i;
	 double n;
	 double pi;
	 double soma;
	 double sinal;
	 double pir;

	 printf("Formula de Leibniz para achar o pi\n");
	 
	 for(i=1; i <10000000; i++){
	 	
	 	pi = 1/ (2 * i + 1 );
	 	
	 	sinal = pow( -1 , i ) * pi;
	 	
	 	soma += sinal;
	 	
	 	
	 }
	 
	 pir = 4 * ( 1 + soma );
	 
	 printf(" pi :%.100f\n\n", pir );
	 
	 system ("pause");
}


