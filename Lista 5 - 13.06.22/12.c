#include <stdio.h>

int main (){
	int num, cont=1, soma=0, store;
	
	printf ("\nInsira um numero:\n");
	scanf ("%d", &num);
	
	while (cont != num){
	
	store = num%cont;
	
	if (store == 0){
		soma = soma +cont;
	}
	else {
		soma = soma + 0;
	}
	cont = cont+1;
	}
	
	if (soma != num){
		printf ("\nO numero %d nao e perfeito\n", num);
	}
	else {
		printf  ("\nO numero %d e perfeito\n", num);
	}
	
	getchar ();
	getchar ();
	
	return 0;
}
