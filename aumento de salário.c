#include <stdio.h>

int Main (){
	
	float sal;
	float por;
	float res1;
	float res2;
	
	printf("digite seu salario: \n");
	scanf("%f", &sal);
	
	printf("digite o pencentual de aumneto: \n");
	scanf("%f", &por);
	
	res1 = sal * (por/100);
	
	res2 = sal + res1;
	
	printf("aumento : %.2f\n", res1);
	
	printf("novo salario : %.2f\n", res2);
	
	system ("pause");
	
	return 0;
	
}
