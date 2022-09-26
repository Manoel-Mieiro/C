#include <stdio.h>

int main(){
	int vet[15];
	int i=1;
	
for (i = 1; i < 16; i++) {
	printf ("\nInsira um numero ao conjunto:\n");
	scanf ("%d", &vet[i]);
			}						
				i = 1;
	printf ("\nEis o vetor original: \n");
	for (i = 1; i < 16; i++) {
		printf ("\n [%d] = %d \n", i, vet[i]);
		}
			i = 1;
			printf ("\nEis o vetor modificado: \n");
			for (i = 1; i < 16; i++) {
				if (vet [i] < 0){
					vet[i]= 0;
				}		
			else{
			}				
		printf ("\n [%d] = %d \n", i, vet[i]);
			}				
								
	getchar ();
	getchar ();
	return 0;
}
