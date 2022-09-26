#include <stdio.h>

int comp (int a, int b);	//declaração de função sempre antes de main

int main (){
	int num1, num2, menor;		//as variaveis que participarão da minha função não devem ter o mesmo nome que as da própria
	printf ("\nInsira um numero inteiro:	");	
	scanf ("%i", &num1);
	printf ("\nInsira outro numero inteiro:	");
	scanf ("%i", &num2);	
	
	menor = comp (num1, num2);			//Tranferindo conteúdo de comp para menor, já que não se pode repetir o nome
		printf ("\nO menor numero e:	%d", menor);	//imprimindo o resultado de menor
	return 0;	//exit
}

int comp (int a, int b){	//função outrora declarada
	if (a < b)				//condição para encontrar o menor arbitrada em "a"
		return a;			//valor se verdadeiro
	else			
		return b;			//valor se falso
}
