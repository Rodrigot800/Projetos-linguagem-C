#include <stdio.h>

int main (){
	
	float n,soma, sub, div, mult;
	float n1;
	float n2;
	
	printf("digite 1 para multiplicar. \n");
    printf("digite 2 para dividir. \n");
    printf("digite 3 para somar. \n");
    printf("digite 4 para subtrair. \n");
    scanf("%f", &n);
    
    if( n == 1 ){
    		
    printf("digite o primeiro numero:\n");
    scanf("%f", &n1);
    
    printf("digite o segundo numero:\n");
    scanf("%f", &n2);
    
    mult= n1 * n2 ;
    
    printf("a multiplicação desses numeros e : %.2f    ", mult);

		
	}
	
	else if( n == 2 ){
    		
    printf("digite o primeiro numero:\n");
    scanf("%f", &n1);
    
    printf("digite o segundo numero:\n");
    scanf("%f", &n2);
    
     div= n1 / n2 ;
    
    printf("a divisao desses numeros e : %.2f   ",div );

		
	}
	
	
	else if( n == 3 ){
    		
    printf("digite o primeiro numero:\n");
    scanf("%f", &n1);
    
    printf("digite o segundo numero:\n");
    scanf("%f", &n2);
    
    soma = n1 + n2 ;
    
    printf("a soma desses numeros e : %.2f    ", soma );

		
	}
	
	else if( n == 4 ){
    		
    printf("digite o primeiro numero:\n");
    scanf("%f", &n1);
    
    printf("digite o segundo numero:\n");
    scanf("%f", &n2);
    
    sub = n1 - n2 ;
    
    printf("a subtracao desses numeros e : %.2f   ", sub );

		
	}
	
	else{
		
	 printf("valor invalido!");
	 
	}
    
    system("pause");
    return 0;
	
}
