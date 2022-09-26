#include <stdio.h>
int main (){
	int num, sum=0;

		printf ("\n Insira um numero inteiro qualquer.\n");
			scanf ("%d", &num);
				if (num != 0){
					sum = sum + num;
					}
				else {
					printf ("\nComo foi digitado o numero 0, o programa foi interrompido.\n");
						exit (0);
				}
					while (num != 0){
						printf ("\n Insira um numero inteiro qualquer\n");
							scanf ("%d", &num);
								sum = sum + num;
					}
		printf ("\nComo foi digitado o numero 0, o programa foi interrompido.\n");
				printf ("\nA soma dos numeros informados foi de %d.\n", sum);
			getchar ();
		getchar ();
	return 0;
}

