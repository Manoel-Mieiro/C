#include <stdio.h>

int main(){
	float vet[5];
	int i=0, cod;
	
for (i = 0; i < 5; i++) {
	printf ("\nInsira um numero ao vetor:\n");
	scanf ("%f", &vet[i]);
			}						
			printf ("\nUtilize o cod 0 para sair do programa,\n 1 para imprimir o vetor na ordem direta\n e 2 para imprimir a ordem inversa.\n ");
				printf ("\nInsira o codigo desejado:\n");
					scanf ("%d", &cod);
						if (cod == 0){
							printf ("\nProgrma encerrado!\n");
							exit (0);
							}
								else if (cod == 1){
									for (i = 0; i < 5; i++){
										printf ("\n [%d] = %f \n", i, vet[i]);
										}
									}
									else if (cod == 2){
										for (i = 4; i >= 0 ; i--){		
											printf ("\n [%d] = %f \n", i, vet[i]); 
											}
										}
										else {
											printf ("\nCodigo Invalido!\n");
										}			
	getchar ();
	getchar ();
	return 0;
}

