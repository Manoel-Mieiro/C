#include <stdio.h>

int main (){
	int num, sum=0, prod=1, cont=1, val; // a variavel val realiza a verificacao da ordem crescente ou nao
	float media=0;
	
	
	//Verificacao da ordem numerica inserida
	do {
	while (cont <= 3){
		printf ("\nInsira um numero qualquer: \n");
		scanf ("%d", &num);
		
		if (cont == 1){
			val = num;
		}
			else if ((cont == 2) && (num - val > 0)){
				val = num;
			}
				else if ((cont == 2) && (num - val < 0)){
					printf ("\n A sequencia inserida nao e crescente!\n");
					printf ("\n Programa encerrado!\n");
					exit (0);
				}
					else if ((cont == 3) && (num - val > 0)){
						val = num;
					}
						else if ((cont == 3) && (num - val < 0)){
							printf ("\n A sequencia inserida nao e crescente!\n");
							printf ("\n Programa encerrado!\n");
							exit (0);
						}
		
		sum = sum + num;
		
		prod = prod * num;
		
		media = sum / cont;
		
		cont = cont + 1;
	}
	printf ("\n	%d soma\n", sum);
	printf ("\n	%d produto\n", prod);
	printf ("\n	%f media\n", media);
	//Reset das variaveis
	cont  = 1;
	sum = 0;
	prod = 1;
	}while (val==num);
	

	
	getchar ();
	getchar ();
	return 0;
}
