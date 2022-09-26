#include <stdio.h>
#include <string.h>

struct endereco{
	char rua[50], bairro [50], cidade[50], estado[50];
	int num;
};
struct cad{
	char nome[50];
	int tel;
	struct endereco E;
}cadastro[2];

int main (){
	int i=0, j=0, k=0, aux1, auxj[2], auxk;
	char alf[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (i; i<2; i++){
	printf ("Informe seu nome:	");
	gets (cadastro[i].nome);
	fflush (stdin);
	printf ("\n\n");
	fflush (stdin);
	printf ("Informe sua rua:	");
	gets (cadastro[i].E.rua);
	fflush (stdin);
	printf ("\n\n");
	fflush (stdin);
	printf ("Informe seu bairro:	");
	gets (cadastro[i].E.bairro);
	fflush (stdin);
	printf ("\n\n");
	fflush (stdin);
	printf ("Informe o numero da casa:	");
	scanf ("%d", &cadastro[i].E.num);
	fflush (stdin);
	printf ("\n\n");
	fflush (stdin);
	printf ("Informe sua cidade:	");
	gets (cadastro[i].E.cidade);
	fflush (stdin);
	printf ("\n\n");
	fflush (stdin);
	printf ("Informe seu estado:	");
	gets (cadastro[i].E.estado);
	fflush (stdin);
	printf ("\n\n");
	fflush (stdin);
	printf ("Informe seu telefone:	");
	scanf ("%d", &cadastro[i].tel);
	fflush (stdin);
	printf ("\n\n");
	fflush (stdin);
}
i=0;
	for (i; i<2; i++){
		auxk = strlen (cadastro[i].nome);
			for (k; k<auxk; k++){
				for(j; j<26; j++){
					aux1 = strcmp (cadastro[k].nome, alf[j]);
					if (aux1==0){
						auxj[i] = j;
					j = 25;
				}
			}
		}
			auxf = strcmp(cadastro[i].nome, cadastro[i+1].nome);
	if (auxf == 0){
	i=0;	
	}	
}

	

//----------Transformar a string em minuscula----------//
//----------Trazer o vetor alfabeto-------------------//
//----------strlen para cada string------------------//
//----------for com o indice de strlen--------------//
//----------Armazenar indice da string se primeira letra = primeira letra alfabeto -----------------//
//----------strcmp entre o conteudo dos 2 indices, se forem diferentes ordenar, senao 
}
