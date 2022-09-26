#include <stdio.h>

int main(){
	int vet[10];
	int maior, menor, i=1, contmaior= 1, contmenor=1;
	
for (i = 1; i < 11; i++) {
	printf ("\nInsira um numero ao conjunto:\n");
	scanf ("%d", &vet[i]);
		if (i == 1){
			maior = vet [i];
				menor = vet [i];
				}			
					else if ((i > 0) && (vet [i] - maior >= 0)){
						maior = vet [i];
							contmaior = i;
							}
							else if ((i>0) && (vet [i] - menor <= 0)){
						menor = vet [i];
						contmenor = i;
					}		
			}						
				i = 1;
					printf ("\nEis o vetor: \n");
						for (i = 1; i < 11; i++) {
							printf ("\n [%d] = %d \n", i, vet[i]);
						}					
					printf ("\n%d foi o maior numero, localizado na posicao [%d].\n", maior, contmaior);
				printf ("\n%d foi o menor numero, localizado na posicao [%d].\n", menor, contmenor);
			getchar ();
		getchar ();
	return 0;
}
