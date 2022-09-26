#include <stdio.h>

int main(){
	int vet [8], i=1, sum = 0, x, y;
	
	for (i =1; i<9; i++){
		printf ("\nInsira um numero inteiro qualquer ao vetor: \n");
				scanf ("%d", &vet[i]);
								}	
									printf ("\nInsira um valor de x (1 até 8): \n");
										scanf ("%d", &x);
											if ((x > 8) || (x < 1)){
													printf ("\nO valor inserido nao corresponde ao intervalo informado.\nPrograma encerrado!\n");
												exit (0);
											}
								printf ("\nInsira um valor de y (1 até 8): \n");
							scanf ("%d", &y);
								if ((y > 8) || (y < 1)){
									printf ("\nO valor inserido nao corresponde ao intervalo informado\n Programa encerrado!\n");
							exit (0);
						}
				sum = sum + vet [x];
			sum = sum + vet [y];
		printf ("\n A posicao %d contem %d\n", x, vet[x]);
	printf ("\n A posicao %d contem %d\n", y, vet[y]);
printf ("\n %d + %d = %d\n", vet[x], vet[y], sum);
	
	getchar ();
	getchar ();
	return 0;
}
