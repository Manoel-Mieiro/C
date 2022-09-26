#include <stdio.h>
#include <string.h>

int main (){
	int i = 0;
	char stg4[5], nome [100];
	printf ("\nInsira seu nome:	");	
				gets (nome);
		for (i; i < 4; i++){
			stg4[i] = nome [i];
			printf ("\%c", nome[i]);
		}
		printf ("\n\n");
	return (0);
}
