#include <stdio.h>

int main (){
	int num, tabuada, cont=0;
	
	printf ("\nInsira um numero entre 1 e 10 para verificar sua tabuada:\n");
	scanf ("%i", &num);
	
	if ((num > 0) && (num <= 10)) {
		while (cont <= 10)	{
				tabuada = num*cont;
				printf ("\n %d X %d = %d", num, cont, tabuada);
				cont = cont+1;
		}
	}
	else {
		printf ("\nInsira um numero correspondente ao intervalo!\n");
	}
	getchar();
	getchar();
	return 0;
}
