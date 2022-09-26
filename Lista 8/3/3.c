#include <stdio.h>

int main (){
	FILE*arquivo;
	char caractere;	
	arquivo = fopen ("arq.txt", "w");
	
	while (caractere != '0'){
		scanf ("%c", &caractere);
		if (caractere == '0'){
			return 0;
		}
		fprintf (arquivo, "%c", caractere);
	}
	fclose (arquivo);
	return 0;
}
