#include <stdio.h>

int main (){
int matriz[4][4], i=0, j=0, maior=0, l, c;


for (i; i < 4;  i++){
	for (j; j<4; j++){
		printf ("\nEntre com um valor:\n");
		scanf ("%d", &matriz[i][j]);
		if (i == 0){
			maior == matriz[i][j];
			l = i;
			c = j;
		}
		else if ((i > 0) && (matriz[i][j] - maior > 0)){
			maior = matriz[i][j];
				l = i;
			c = j;
		}
	}
j = 0;
}
printf ("\nEis o maior valor da matriz:	\n");
printf ("\n [%d, %d] = %d \n", l, c, maior);

getchar();
getchar();
return 0;
}

