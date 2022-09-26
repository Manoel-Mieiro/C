#include <stdio.h>
#include <string.h>

struct aluno{
	char nome[50];
	int matricula, cod_disciplina;
	float n1, n2;
}alunos[10];

int main(){
	int i=0;
	float media[10];
	
	for (i; i<10; i++){
		printf ("Insira o nome do aluno:	");
		gets (alunos[i].nome);
		fflush (stdin);
		printf ("Informe a matricula:	");
		scanf ("\n%d", &alunos[i].matricula);
		fflush (stdin);
		printf ("Infome o codigo da disciplina:	");
		scanf("\n%d", &alunos[i].cod_disciplina);
		fflush (stdin);
		printf ("Infome a nota da primeira prova:	");
		scanf ("\n%f", &alunos[i].n1);
		fflush (stdin);
		printf ("Informe a nota da segunda prova:	");
		scanf ("\n%f", &alunos[i].n2);
		fflush (stdin);
		media[i] = ((alunos[i].n1)+(2*(alunos[i].n2)))/3;	
	}
	i=0;
		printf ("\n\nEis a relacao aluno x media final:\n\n");	
			for (i; i<10; i++){
			printf ("Aluno:	%s ........... Media Final: %f\n\n", alunos[i].nome, media[i]);
		}
}
