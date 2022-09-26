#include <stdio.h>
int main (){
	float num, maior=0, menor=0, cont=0;
		
		while (cont < 15){
			printf ("\n Insira um numero real qualquer\n");
			scanf ("%f", &num);
			
			if (cont == 0){
				maior = num;
				menor = num;
			}
			else if (cont > 0) {
				if (num-maior >= 0){
					maior =  num;
				}
					else if (num - menor <= 0){
						menor = num;
				 }
			}
			else {
			}
			cont = cont + 1;
		}
	printf ("\nO maior numero informado foi %f\n", maior);
	printf ("\nO menor numero informado foi %f\n", menor);
	getchar ();
	getchar ();
	return 0;
}

