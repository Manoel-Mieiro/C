#include <stdio.h>

int main (){
	float num[10], square[10];
	int i=1;
	
	for (i = 1; i < 11; i++) {
	printf ("\nInsira um numero ao conjunto:\n");
	scanf ("%f", &num[i]);
	square [i] = (num [i])*(num [i]);
	}
	
	i = 1;
	
	for (i = 1; i < 11; i++) {
		printf ("\nEis os termos quadrados do conjunto: \n");
			printf ("\n [%d] = %f \n", i, square [i]);
	}
	
	getchar ();
	getchar ();
	return 0;
}
