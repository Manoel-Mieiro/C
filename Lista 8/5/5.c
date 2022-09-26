#include <stdio.h>

int main (){
	char titulo [256];
	char texto [256];
	
	FILE*arq;
	printf ("Informe o titulo:	\n");
	scanf ("%[^\n]%*c", titulo);
	printf ("Digite o texto que bem entender:	\n");
	scanf ("%[^\n]", texto);
	
	arq = fopen (titulo, "w");
	
	fprintf (arq, "%s", texto);
	
	fclose (arq);
	
	return 0;
}
