#include <stdio.h>
#include <string.h>

struct infsPessoais{
	char nome[256];
	int idade;
};

typedef struct infsPessoais user;

int main(){
	user usuarios [5];
	
	char nome[256];
	
	int dia;
	int mes;
	int ano; 
	int anoAtual;
	
	int i=0;
	
	FILE*arq;
	
	printf ("Insira o ano atual:	\n");
	scanf ("%d", &anoAtual);
	
	arq = fopen("arq.txt", "r") ;
	
	while (fscanf(arq, "%s %d %d %d", nome, &dia, &mes, &ano) != EOF){
		strcpy (usuarios[i].nome, nome);
		usuarios[i].idade = anoAtual - ano;
		i++;
	}
	fclose (arq);
	
	for (i=0; i<5; i++){
		printf ("%s %d\n", usuarios[i].nome, usuarios[i].idade);
	}
return 0;
}
