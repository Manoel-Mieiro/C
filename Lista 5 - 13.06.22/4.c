#include <stdio.h>

int main (){
	int num, cont=1, intervalo=0;
	printf ("\nInsira um numero inteiro qualquer:\n");
		scanf ("%d", &num);
		if ((num > 10) && (num <20)){
			intervalo = intervalo + 1;
		}
	for  (cont=1; cont < 10; cont++){
		printf ("\nInsira um numero inteiro qualquer:\n");
		scanf ("%d", &num);
		if ((num > 10) && (num <20)){
			intervalo = intervalo + 1;
		}
		else {
		}
	}
	printf ("\nApos verificacao, encontramos %d numeros entre 10 e 20 e %d numeros fora desse intervalo.", intervalo, (cont - intervalo));
	getchar();
	getchar();
	return 0;
}
