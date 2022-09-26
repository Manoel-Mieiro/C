#include <stdio.h>

int main (){
	int x=0, y=0, i=0, j=0, anuladas=0;
	int anulaI = 0, anulaJ = 0;
	
	FILE*arq;
	
	arq = fopen("arq.txt", "r");
	
	fscanf(arq, "%d %d %d", &i, &j, &anuladas);
	
	int matriz[i][j];
	
	for (x=0; x<i; x++){
		for (y=0; y<j; y++){
			matriz[x][y] = 1;
		}
	}
	for (x=0; x<anuladas; x++){
		fscanf(arq, "%d %d", &anulaI, &anulaJ);
		
		matriz[anulaI][anulaJ] = 0;
	}
	for (x=0; x<i; x++){
		for (y=0; y<j; y++)	{
			printf ("%d	", matriz[x][y]);
		}
		printf ("\n");
	}
	return 0;
}	
