#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main( int argc, char *argv[]){
	
	setlocale(LC_ALL, "portuguese");
	
	int mat[3][3];
	int i,j,x,col,lin, achou;
	
	for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("insira o elemento da linha %d na coluna %d.\n", i, j);
        scanf("%d", &mat[i][j]);
    }
}

}
