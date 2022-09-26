#include <stdio.h>

int main(){
	int vet1[10], vet2[10], vet3[20];
	int i=1, n=1, m=1;
	
for (i = 1; i < 11; i++) {
	printf ("\nInsira um numero ao vetor 1:\n");
	scanf ("%d", &vet1[i]);
			}		
			i = 1;
			for (i = 1; i < 11; i++) {	
				printf ("\nInsira um numero ao vetor 2:\n");
					scanf ("%d", &vet2[i]);
				}
				i = 1;
				printf ("\nEis o vetor resultante:\n");
				for (i = 1; i < 21; i++) {
					if (i%2 == 0){
						vet3[i] = vet1[n];
						n++;
					}
					else if (i%2 != 0){
						vet3[i] = vet2[m];	
						m++;
					}
				printf ("\n [%d] = %d \n", i, vet3[i]);
			}
	getchar ();
	getchar ();
	return 0;
}

