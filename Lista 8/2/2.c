#include <stdio.h>
#include <stdlib.h>

int main (){
	int x=0, y=0, i=0, j=0, anuladas = 0;
	int anula_i = 0, anula_j = 0;
	int mat[i][j];
	
	FILE*arquivo;
	
	arquivo = fopen("arq.txt", "r");
	if (arquivo == NULL ) {
        printf("Nao foi possivel abrir o arquivo 1!\n");
        return 1;
    }	
	fscanf (arquivo, "%d %d %d", &i, &j, &anuladas);
	for (x=0; x<i; x++){
		for (y=0; y<j; y++){
			mat[x][y] = 1;
		}
	}
	for (x=0; x < anuladas; x++){
		fscanf(arquivo, "%d %d", &anula_i, anula_j);
		mat[anula_i][anula_j]=0;
	}
	for (x=0; x<i; x++){
		for (y=0; y<j; y++){
			printf("%d	", mat[x][y]);
		}
		printf("\n");
	}
	fclose (arquivo);
	return 0;
}
