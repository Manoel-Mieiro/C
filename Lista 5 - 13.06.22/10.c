#include <stdio.h>
int main (){
	float soma=1, fracao=1, numerador=1, denominador=1;
	
	while (denominador < 50){
		numerador = numerador+2;
		denominador = denominador+1;
		fracao = numerador/denominador;
		soma = soma+fracao;
	}
		printf ("\n %f \n", soma);
		
	getchar ();
	getchar ();
	return 0;
}

