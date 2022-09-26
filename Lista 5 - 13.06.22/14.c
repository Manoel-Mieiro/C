#include <stdio.h>

int main (){
	float massa, tempo=0;
	printf ("\nInsira a massa do material.\n");
	scanf ("%f", &massa);
	
	while (massa >= 0.5 ){
		massa = massa*0.5;
		tempo = tempo + 0.5;
		}	
		
		printf ("\nO material levou %f segundos para ter menos de 0.5 de sua massa.\n", tempo);
		
	getchar ();
	getchar ();
	return 0;
}
