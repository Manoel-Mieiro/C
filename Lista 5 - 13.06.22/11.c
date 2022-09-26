#include <stdio.h>

int main (){
	int num1, num2, prod;
	
	printf ("\nInsira um numero:\n");
	scanf ("%d", &num1);
	
	printf ("\nInsira outro numero:\n");
	scanf ("%d", &num2);
	
	
	if ((num1 != 0) || (num2 != 0)) {
	prod = num1*num2;	
	printf ("%d * %d = %d", num1, num2, prod);
	}
	
	else {
	printf ("\nPrograma encerrado, vide insercao de zero.\n");
	exit (0);
	}
	do {
	printf ("\nInsira um numero:\n");
	scanf ("%d", &num1);
	
	printf ("\nInsira outro numero:\n");
	scanf ("%d", &num2);
	
	prod = num1*num2;
	
	if (prod == 0){
		printf ("\nPrograma encerrado, vide insercao de zero.\n");
		exit (0);
	}
	else{
	printf ("%d * %d = %d", num1, num2, prod);
	}
	} while (prod != 0);
	
	getchar ();
	getchar ();
	
	return 0;
}
