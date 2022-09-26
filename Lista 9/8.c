#include <stdio.h>

int verificador (int a);	

int main (){
	int num, verify;		
	printf ("\nInsira um numero inteiro:	");	
	scanf ("%i", &num);
	
	verify = verificador (num);			
		printf ("%d", verify);	
	return 0;	
}

int verificador (int a){	
	if (a > 0)				
		return 1;			//valor se positivo
	else if (a == 0)			
		return 0;			//valor se zero
	else {
		return -1;			//valor se negativo0
	}
}
