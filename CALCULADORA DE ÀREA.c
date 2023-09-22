#include <stdio.h>
#include <string.h>

int main(){
	
	
	char geo[20];
	int base;
	int altura = 0;
	int area;
	int raio;
	int basemaior = 0;
	int basemenor =0;
	int diagmaior;
	int diagmenor;
	float apotema;
	float areapi;
	float perimetro;
	float PI = 3.1415;
	float raiz3 = 1.7;
    float lado;
	
	
	
	printf("CALCULADORA DE GEO. PLANAS \n ");
	printf("Autor: Rodrigo da Silva Peixoto \n\n ");
	printf("digite a figura geotrica plana:\n\n ");
	scanf("%s",geo);
	
	if(strcmp(geo, "quadrado") == 0){
		
		printf("digite a BASE:\n\n");
		scanf("%d", &base);
		
		printf("digite a altura:\n\n");
		scanf("%d", &altura);
		
		area = base*altura;
		
		printf("area do quadrado : %d.", area);
				
	}
	
	 else if(strcmp(geo, "triangulo") == 0) {
        printf("digite a BASE:\n\n");
		scanf("%d", &base);
		
		printf("digite a altura:\n\n");
		scanf("%d", &altura);
		
		area = (base*altura)/2;
		
		printf("area do triangulo : %d.", area);
		
        
    }
    
    else if(strcmp(geo, "circulo") == 0) {
        printf("digite o Raio:\n\n");
		scanf("%d", &raio);
		
		areapi = PI * raio * raio;
		
		perimetro = 2 * PI * raio;
		
		printf("area do circulo : %.10f.\n", areapi);
		
		printf("perimetro: %.10f.", perimetro);
		
        
    }
    
    else if(strcmp(geo, "retangulo") == 0){
		
		printf("digite a BASE:\n\n");
		scanf("%d", &base);
		
		printf("digite a altura:\n\n");
		scanf("%d", &altura);
		
		area = base * altura;
		
		printf("area do retangulo : %d.", area);
		
				
	}
	
	else if(strcmp(geo, "trapezio") == 0){
		
		printf("digite a BASE maior:\n\n");
		scanf("%d", &basemaior);
		
		printf("digite a BASE menor:\n\n");
		scanf("%d", &basemenor);
		
		printf("digite a altura:\n\n");
		scanf("%d", &altura);
		
		area = (basemaior+basemenor)* altura/2;
		
		printf("area do trapezio : %f.", area);
		
	}
	
	else if(strcmp(geo, "losango") == 0){
		
		printf("digite a Diagonal maior:\n\n");
		scanf("%d", &diagmaior);
		
		printf("digite a Diagonal menor:\n\n");
		scanf("%d", &diagmenor);
		
		area = diagmenor * diagmaior/ 2;
		
		
		printf("area do losango : %d.", area);
		
				
	}
	

	
	else if(strcmp(geo, "pentagono") == 0){
		
		printf("digite o Perimetro:\n\n");
		scanf("%f", &perimetro);
		
		printf("digite o apotema:\n\n");
		scanf("%f", &apotema);
		
		areapi = perimetro*apotema/2;
		
		printf("area do Pentagono : %.2f", areapi);
		
				
	}
	
	else if(strcmp(geo, "hexagono") == 0){
		
		printf("digite o lado:\n\n");
		scanf("%f", &lado);
		
		areapi = (lado * lado * raiz3)/4;
		
		printf("area do hexagono : %.2f", areapi);
		
				
	}
		
		
    
    else {
    	printf("valor invalido!!");
	}
	
	return 0;
	
}
