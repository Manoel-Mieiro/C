#include <stdio.h>	

float media (float n1, float n2, float n3, char op);

int main (){
	float nota1, nota2, nota3, media_final;
	 char type;
	
	printf ("Insira a nota da p1:	");
	scanf ("%f", &nota1);
	printf ("Insira a nota da p2:	");
	scanf ("%f", &nota2);
	printf ("Insira a nota da p3:	");
	scanf ("%f", &nota3);
	
	printf ("Informe a operacao que deseja executar com base nos seguintes parametros:\n");
	printf ("A ---------------- Calcula a media aritimetica\n\nP ---------------- Calcula a media ponderada\n\nH ---------------- Calcula a media harmonica\n\n");
	fflush (stdin);
	scanf ("%c", &type);
	
	media_final = media (nota1, nota2, nota3, type);
	
	printf ("%.0f", media_final);
	
	return 0;
}

float media (float n1, float n2, float n3, char tipo){	
float somafrac;
		somafrac = ((1/n1)+(1/n2)+(1/n3));
	//-------------------caso A--------------------------//
	switch (tipo){
		case 'A':
			return (n1+n2+n3)/3;
			break;
		case 'a':
			return (n1+n2+n3)/3;
			break;	
	//-------------------caso P--------------------------//		
		case 'P':
			return ((5*n1)+(3*n2)+(2*n3))/10;
			break;
		case 'p':
			return ((5*n1)+(3*n2)+(2*n3))/10;
			break;	
	//-------------------caso H--------------------------//				
		case 'H':
			return 3/somafrac;
			break;
		case 'h':
			return 3/somafrac;
			break;	
	}
	
}
