#include <stdio.h>

int verificador (int a);	

int main (){
	int num, verify;		
	printf ("\nInsira um numero inteiro:	");	
	scanf ("%i", &num);
	
	verify = verificador (num);	
		printf ("%d", verify);	
	return 0;	//exit
}

int verificador (int a){	
	if (a%2==0)				
		return 1;			//valor se par
	else			
		return 0;			//valor se impar
}
