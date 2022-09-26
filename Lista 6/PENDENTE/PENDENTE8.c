#include <stdio.h>

int main(){
	int vet1[2], vet2[2], vet3[4];
	int i=0, n=0, erro=1, casas=0;
	
for (i = 0; i < 2; i++) {
	printf ("\nInsira um numero ao vetor 1:\n");
	scanf ("%d", &vet1[i]);
			}		
			i = 0;
			for (i = 0; i < 2; i++) {	
				printf ("\nInsira um numero ao vetor 2:\n");
					scanf ("%d", &vet2[i]);
				}
				i = 0;
				for (i=0; i < 2; i++){
					for (n=0; n <= i; n++){
					if (vet1[i] == vet2[n]){
						vet3[n] = vet1[i];
						casas = casas + 1;
					}
				}	
			}
			n = 0;
				i = 0;
				for (i = 0; i < 2; i++){
					for (n=0; n <= casas; n++){
					erro = vet3[n] - vet1[i];
					}
					n = 0;
				}
				n=0;
				if (erro == 0){
					exit (0);
				}
					else{
						for (n=0; n <= casas; n++){
						printf ("\n [%d] = %d \n", i, vet3[n]);
					}
			}
	getchar ();
	getchar ();
	return 0;
}

