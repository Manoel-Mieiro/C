#include <stdio.h>

int main (){
	int num, cont=1, sum=0;
	
	printf ("\nInsira um numero qualquer: \n");
	scanf ("%d", &num);
	
	
	
	while (cont <= num){
		if (num%cont == 0){
			sum = sum + 1;
		}
		else {
		}
		cont = cont + 1;
	}
	
	if (sum != 2){
		printf ("\n O numero %d nao e primo", num);
	}
	else{
		printf ("\n O numero %d e primo", num);
	}
	
	getchar ();
	getchar ();
	return 0;
	
}
