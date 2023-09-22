#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void CalcKW(float v_sl, float q_kw, float *v_kw, float *v_res, float * v_dsc){
	
	*v_kw = v_sl / 1000;
	*v_res = *v_kw * q_kw;
	*v_dsc = *v_res * 0.85;
}


int main( int argc, char *argv[]){
	
	setlocale(LC_ALL, "portuguese");
	
	float val_sal, KW, val_KW, val_res, val_desc;
	
	printf("insira o salário mínimo:\n ");
	scanf("%f", &val_sal);
	
	printf("insira a quantidade de KW gastos:\n ");
	scanf("%f", &KW);
	
	CalcKW(val_sal, KW, & val_KW, &val_res, &val_desc);
	
	printf("valor de 1 kw: %.2f. \n ", val_KW);
	printf("valor a ser pago por residência: %.2f. \n ", val_res);
	printf("valor com desconto de 15%%: %.2f. \n ", val_desc);
	
	return 0;

	}
