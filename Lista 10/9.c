#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main (void){
    struct turma{ 
        char nome[30];
        char matricula[8];
        float media_final;
    };

    struct turma alunos[10]; 
    struct turma reprovados[10];
    struct turma aprovados[10];

    for(int x=0; x<10; x++){ 
        reprovados[x].nome[0]=' ';
        aprovados[x].nome[0]=' ';
    }

    for(int x=0;x<10;x++){  /*Entrada de dados*/
        printf("Digite o nome do aluno: ");
        scanf("%s",&alunos[x].nome);
        fflush(stdin);
        printf("Digite o numero da matricula: ");
        scanf("%s",&alunos[x].matricula);
        fflush(stdin);
        printf("Digite a media final: ");
        scanf("%f",&alunos[x].media_final);
        fflush(stdin);
        printf("\n");
    }

    int conta=0; 
    int contr=0;

    for (int x=0; x<10; x++){
        if(alunos[x].media_final<(5)){
            reprovados[contr]=alunos[x];
            contr++;
        }
        if(alunos[x].media_final>(5)){
            aprovados[conta]=alunos[x];
            conta++;
        }
    }
	printf ("Eis a lista dos aprovados:	");
    for(int x=0; x<10; x++){ 
        if(aprovados[x].nome[0]!=' '){
            printf("Nome: %s\nMatricula: %s\nNota: %2.1f\n\n",aprovados[x].nome,aprovados[x].matricula,aprovados[x].media_final);
        }
    }
	printf ("Eis a lista dos reprovados:	");
    for(int x=0;x<10;x++){
        if(reprovados[x].nome[0]!=' '){
            printf("Nome: %s\nMatricula: %s\nNota: %2.1f\n\n",reprovados[x].nome,reprovados[x].matricula,reprovados[x].media_final);
        }
    }
}
