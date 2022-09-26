#include <stdio.h>
#include <string.h>
struct turma {
	char nome[50];
	int matricula;
	float media_final;
}medias[3];


int main(){
	int i=0, j=0, k=0, max=0, maxr=0;
	char aprovados[3], reprovados[3];
	for (i; i<3; i++){
		printf ("Insira o nome do aluno:	");
		fgets (medias[i].nome, 50, stdin);
		fflush (stdin);
		printf ("Informe a matricula:	");
		scanf ("\n\n%d", &medias[i].matricula);
		fflush (stdin);
		printf ("Informe a media final:	");
		scanf ("\n\n%f", &medias[i].media_final);
		fflush (stdin);
			if(medias[i].media_final >= 5){
		aprovados[k] = medias[i].nome;
		k++;
	}
	else {
		reprovados[j] = medias[i].nome;
		j++;
	}
//não estou conseguindo imprimir as strings.
	}
k=0;
j=0;
for (k; k<3; k++){
	printf ("%s", aprovados[k]);
}
for (j; j<3; j++){
	printf ("%s", reprovados[j]);
}
}

