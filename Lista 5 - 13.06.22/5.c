#include <stdio.h>

int main (){
	float n1, n2, n3, media;
	int cont=1;
	
	
		while  (cont < 11){
			printf ("\nInsira a primeira nota:\n");
			scanf ("%f", &n1);
				printf ("\nInsira a segunda nota:\n");
				scanf ("%f", &n2);
					printf ("\nInsira a terceira nota:\n");
						scanf ("%f", &n3);
						
						if ((n1 < 0)|| (n1 > 10) || (n2 < 0) || (n2 > 10) || (n3 < 0)	|| (n3 > 10)){
									printf ("\nInsira notdas de 0 ate 10!\n");
								exit (0);
								}
						else{
				media = (n1+n2+n3)/3;
			printf ("\n O aluno de numero %d obteve %f de media\n", cont, media);
		cont = cont + 1;
	}
}	
	getchar();
	getchar();
	return 0;
}

