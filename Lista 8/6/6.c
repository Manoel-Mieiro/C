#include <stdio.h>

int main (){
	char titulo[256];
	char caractere;
	
	FILE*arq;
	
	printf ("Insira o nome do arquivo que deseja abrir (nao se esqueca de acrescentar o .txt)\n\n");
	scanf("%[^\n]", titulo);
	
	arq = fopen(titulo, "r");
	
	while (fscanf (arq, "%c", &caractere) != EOF)
		printf ("%c", caractere);
	fclose (arq);
	
	return 0;
}
