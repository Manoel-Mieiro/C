#include <stdio.h>

int main (){
	int num, cont=1, par=0, impar=0;
	
	
	while (cont <= 10)	{
		printf ("\nInsira um numero inteiro qualquer:\n");
		scanf ("%d", &num);
	if (num%2 == 0){
		par = par+1;
	}
	else {
		impar = impar+1;
	}
	cont = cont+1;
	}
	printf ("\n Apos verificacao, encontramos %d numeros pares e %d impares:\n", par, impar);
	getchar();
	getchar();
	return 0;
}
