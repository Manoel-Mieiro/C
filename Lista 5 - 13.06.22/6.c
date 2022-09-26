#include <stdio.h>

int main (){
	int num;
	printf ("\n Insira um numero entre 12 e 20\n");
	scanf ("%d", &num);
	
if ((num <= 12) || (num >= 20)){
			printf ("\n Entrada invalida");
				printf ("\n Insira um numero entre 12 e 20\n");
						scanf ("%d", &num);
			if ((num > 12) && (num < 20)){
		printf ("\n%d\n", num);	
	}
	else {
		printf ("\n Entrada invalida");
		exit (0);
	}
}
	else {
		printf ("\n%d\n", num);	
}
	getchar();
	getchar();
	return 0;
}
