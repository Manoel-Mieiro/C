#include <stdio.h>

int comp (int a, int b);	//declara��o de fun��o sempre antes de main

int main (){
	int num1, num2, menor;		//as variaveis que participar�o da minha fun��o n�o devem ter o mesmo nome que as da pr�pria
	printf ("\nInsira um numero inteiro:	");	
	scanf ("%i", &num1);
	printf ("\nInsira outro numero inteiro:	");
	scanf ("%i", &num2);	
	
	menor = comp (num1, num2);			//Tranferindo conte�do de comp para menor, j� que n�o se pode repetir o nome
		printf ("\nO menor numero e:	%d", menor);	//imprimindo o resultado de menor
	return 0;	//exit
}

int comp (int a, int b){	//fun��o outrora declarada
	if (a < b)				//condi��o para encontrar o menor arbitrada em "a"
		return a;			//valor se verdadeiro
	else			
		return b;			//valor se falso
}
