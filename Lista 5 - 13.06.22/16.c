#include <stdio.h>

int main (){
	int num, sump=0, sumi=0;
	printf ("\nInsira um numero inteiro positivo qualquer, menor que 1001:\n");
		scanf ("%d", &num);
		
		if ((num < 0) || (num > 1000)){
			printf ("\n Numero fora do intervalo estabelecido. \n");
			exit (0);
		}
		
		if (num%2 == 0){
			sump = sump+num;
		}
		else{
			sumi = sumi+num;
		}
	
	
	
	do{
		printf ("\nInsira um numero inteiro positivo qualquer, menor que 1001:\n");
		scanf ("%d", &num);
		
		if (((num < 0) || (num > 1000)) && (num%2 == 0)){
				num = 0;
				}
				else if (((num < 0) || (num > 1000)) && (num%2 != 0)){
					num = 0;
				}
		
		if (num%2 == 0){
			sump = sump+num;
		}
		else{
			sumi = sumi+num;
		}
		
	}while ((num > 0) && (num <= 1000));
	
	
	printf ("\nEis a soma dos numeros pares inseridos:\n");
	printf ("%i", sump);
	printf ("\nEis a soma dos numeros pares inseridos:\n");
	printf ("%i", sumi);
	
	getchar ();
	getchar ();
	return 0;
}
