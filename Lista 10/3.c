#include <stdio.h>
#include <string.h>

//sessão de declaração de estrutura
struct	cad_aluno{
	char name[50], course[50];	//nome e curso	
	int sign_up;	//matricula
}alunos[5];	//variavel vetor criada



// Coleta de dados em main
int main (){
	int i=0;
	for (i; i<5; i++){
	printf ("\n\nQual o nome do aluno?......................:");
	gets (alunos[i].name);	//gets para trazer a string cujo pathing é a var alunos[i] no form name
	printf ("\n\nQual seu curso?......................:");
	gets (alunos[i].course);	//gets para trazer a string cujo pathing é a var alunos[i] no form course
	printf ("\n\nQual o numero de matricula?......................:");
	scanf ("%d", &alunos[i].sign_up);	//leitura do num de matricula presente em alunos[i]
	
	//Impresão dos dados coletados	
	printf("\n\n%s\n\n", alunos[i].name);	
	fflush (stdin);	//limpar buffer do teclado
	printf("%s\n\n", alunos[i].course);	
	printf("%d", alunos[i].sign_up);
	}
}

