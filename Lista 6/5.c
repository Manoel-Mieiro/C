#include <stdio.h>

int main(){
	int vet[20];
	int i=1;
	
for (i = 1; i < 21; i++) {
	printf ("\nInsira um numero ao conjunto:\n");
	scanf ("%d", &vet[i]);
			}						
				i = 1;
	printf ("\nEis o vetor original: \n");
	for (i = 1; i < 21; i++) {
		printf ("\n [%d] = %d \n", i, vet[i]);
		}
			i = 1;
			printf ("\nEis o vetor par: \n");
			for (i = 1; i < 21; i++) {
				if (vet [i]%2 == 0){
				printf ("\n [%d] = %d \n", i, vet[i]);
				}		
			}				
			
				i = 1;
				printf ("\nEis o vetor impar: \n");
				for (i = 1; i < 21; i++) {
					if (vet [i]%2 != 0){
					printf ("\n [%d] = %d \n", i, vet[i]);
				}		
			}	
								
	getchar ();
	getchar ();
	return 0;
}

