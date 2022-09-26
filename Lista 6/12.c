#include <stdio.h>

int main (){
int matriz[5][5], i=0, j=0;


for (i; i < 5;  i++){
	for (j; j<5; j++){
		if (i == j){
		matriz[i][j] = 1;
		}
		else {
			matriz[i][j] = 0;
		}
	}
j = 0;
}
i = 0;
printf ("\nEis a matriz:\n");
for (i=0; i < 5;  i++){
	for (j=0; j<5; j++){
		printf("[%d]", matriz[i][j]);
	}
	printf("\n");
}
getchar(); 
getchar();
return 0;
}

