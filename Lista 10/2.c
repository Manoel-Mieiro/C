#include <stdio.h>
#include <string.h>

//sess�o de declara��o de estrutura
struct	account{
	char name[50], address[100];	//aqui eu pedi o endere�o inteiro em uma string, mas poderia divilo em outra struct e adicionar seu conteudo aqui
	int age;
}form;	//variavel form criada



// Coleta de dados em main
int main (){
	printf ("\n\nQual seu nome?......................:");
	gets (form.name);
	printf ("\n\nQual seu endereco?......................:");
	gets (form.address);
	printf ("\n\nQual sua idade?......................:");
	scanf ("%d", &form.age);	
	
	//Impres�o dos dados coletados	
	printf("%s\n\n", form.name);	
	printf("%s\n\n", form.address);	
	printf("%d", form.age);
}

