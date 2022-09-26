#include <stdio.h>

int main (){
int matriz[4][4], i=0, j=0;


for (i=0; i < 4;  i++){
	for (j=0; j < 4; j++){
		matriz[i][j] = ((i+1)*(j+1));
		}
	j = 0;
}
i = 0;
printf("\nEis a matriz:\n");
for (i=0; i < 4;  i++){
	for (j=0; j < 4; j++){
		printf("[%d]", matriz[i][j]);
	}
	printf("\n");
}
getchar(); 
getchar();
return 0;
}
