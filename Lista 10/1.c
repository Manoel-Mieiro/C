#include <stdio.h>
#include <string.h>

//sessão de declaração de estruturas
struct	horario{
	int hora, minutos, segundos;	
};

struct	data{
	int dia, mes, ano;
};

struct	compromisso{
	char txt[50];	//string
	struct horario H;	//resgatando horario e atribuindo um nome a ele nesse form
	struct data D;	//resgatando data e atribuindo um nome a ela nesse form
} compromisso1;		//definindo a variavel correpondente ao form compromisso

// Coleta de dados em main
int main (){
	printf ("\n\nQual sera o compromisso a ser marcado?......................:");
	gets (compromisso1.txt);	//gets para trazer a string cujo pathing é a var compromisso1 no campo txt
	printf ("\n\nQual a hora que deseja reservar?......................:");
	scanf ("%d", &compromisso1.H.hora);	//leitura da hora presente em compromisso1, a qual se encontra no subform H
	printf ("\n\nQuantos minutos deseja reservar?......................:");
	scanf ("%d", &compromisso1.H.minutos);	//leitura dos minutos presentes em compromisso1, o qual se encontra no subform H
	printf ("\n\nQuantos segundos deseja reservar?......................:");
	scanf ("%d", &compromisso1.H.segundos);	//leitura dos segundos presentes em compromisso1, o qual se encontra no subform H
	printf ("\n\nQual o dia que deseja reservar?......................:");
	scanf ("%d", &compromisso1.D.dia);	//leitura do dia presente em compromisso1, o qual se encontra no subform D 
	1, o qual se encontra no subform H
	printf ("\n\nQual o mes que deseja reservar?......................:");
	scanf ("%d", &compromisso1.D.mes);	//leitura do mes presente em compromisso1, o qual se encontra no subform D
	printf ("\n\nQual o ano que deseja reservar?......................:");
	scanf ("%d", &compromisso1.D.ano);	//leitura do ano presente em compromisso1, o qual se encontra no subform D	
	
	//Impresão dos dados coletados	
	printf("%s\n\n", compromisso1.txt);	
	printf("%d:", compromisso1.H.hora);
	printf("%d:", compromisso1.H.minutos);
	printf("%d\n\n", compromisso1.H.segundos);
	printf("%d/", compromisso1.D.dia);	
	printf("%d/", compromisso1.D.mes);
	printf("%d\n\n", compromisso1.D.ano);
}

