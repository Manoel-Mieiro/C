#include <stdio.h>
#include <string.h>

struct personal_data {
	char sex[2], name[50];
	int age, day, mouth, year; 
	float CPF;	
};

struct job_info{
	int cod_area; 
	char position[30];
	float income;
	struct personal_data pdata;
}full_form;

int main (){
	printf ("Insira seu nome:	");
	gets (full_form.pdata.name);
	fflush (stdin);
	printf ("Insira sua idade:	");
	scanf ("\n%d", &full_form.pdata.age);
	fflush (stdin);
	printf ("Digite M para sexo masculino ou F para feminino:	");
	gets (full_form.pdata.sex);
	fflush (stdin);
	printf ("Informe seu CPF:	");
	scanf ("\n%f", &full_form.pdata.CPF);
	fflush (stdin);
	printf ("Insira o dia em que nasceu:	");
	scanf ("\n%d", &full_form.pdata.day);
	fflush (stdin);
	printf ("Insira o mes em que nasceu:	");
	scanf ("\n%d", &full_form.pdata.mouth);
	fflush (stdin);
	printf ("Insira o ano em que nasceu:	");
	scanf ("\n%d", &full_form.pdata.year);
	fflush (stdin);
	printf ("Informe o codigo do setor onde trabalha:	");
	scanf ("\n%d", &full_form.cod_area);
	if ((full_form.cod_area < 0) || (full_form.cod_area > 99)){
		printf ("So sao aceitos codigos de 0 a 99");
		exit(0);
	}
	fflush (stdin);
	printf ("Informe seu cargo:	");
	gets (full_form.position);
	fflush (stdin);
	printf ("Informe seu salario:	");
	scanf ("\n%f", &full_form.income);
	fflush (stdin);
	
	
	printf ("Nome:	%s\n\n", full_form.pdata.name);
	printf ("Idade:	%d\n\n", full_form.pdata.age);
	printf ("Sexo:	%s\n\n", full_form.pdata.sex);
	printf ("CPF:	%.0f\n\n", full_form.pdata.CPF);
	printf ("Codigo da Area:	%d\n\n", full_form.cod_area);
	printf ("Data de Nascimento:	%d/%d/%d\n\n", full_form.pdata.day, full_form.pdata.mouth, full_form.pdata.year);
	printf ("Cargo:	%s\n\n", full_form.position);
	printf ("Salario:	%.2f\n\n", full_form.income);
}

