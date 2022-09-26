#include <stdio.h>

int main (){
int matriz[4][4], i=0, j=0, cont=0;


for (i; i < 4;  i++){
	for (j; j<4; j++){
		printf ("\nEntre com um valor:\n");
		scanf ("%d", &matriz[i][j]);
		if (matriz[i][j] > 10){
			cont ++;
		}
	}
j = 0;
}
printf ("\nHa %d numero(s) maiore(s) que 10 na matriz!\n", cont);
i = 0;
printf ("\nEis os numeros maiores que 10:\n");
for (i; i < 4;  i++){
	for (j; j<4; j++){
		if (matriz[i][j] > 10){
		printf("\n%d\n", matriz[i][j]);
		}
	}
j = 0;
}
getchar();
getchar();
return 0;
}

