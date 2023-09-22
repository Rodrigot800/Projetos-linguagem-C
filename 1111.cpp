#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main( int argc, char *argv[]){
	
	setlocale(LC_ALL, "portuguese");
	
	 double i = 1; // resultado 
	 double pir;
	 double pi;
	 double exp = 2.0;
	 double res = 0.0;
	 double resultado = pow( i , exp );
	 double soma = 0.0;
	 double raiz = sqrt(2);
	 double n ;
	 
	 printf("pi (somando os inverso dos quadrados) com n repetições:\n ");
	 
	 
	 for(i=1; i<= ; i++){
	 	
	 	pi =  6 * ( 1/ pow(i , exp) )  ;
	 	
	 	
	 	soma += pi;
	 	
		  	
	 }
	
	pir = sqrt(soma);
	 
	 
	 printf("%.10f", pir);
	 
	
	 	 
}
