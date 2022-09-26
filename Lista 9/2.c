#include <stdio.h>
#include <math.h>		//biblioteca que me permite calcular a raiz quadrada mais adiante no programa
float distance (float x1, float x2, float y1, float y2);	//declaracao de distance, bem como sesus  parametros

int main (){	//fun��o main
	float distancia, xa, xb, ya, yb;	//declara��o das vari�veis irm�s de distance
	//---------------------Ponto A-----------------//
	printf ("Insira a coordenada x do ponto a:	\n");
	scanf ("%f", &xa);
	printf ("Insira a coordenada y do ponto a:	\n");
	scanf ("%f", &ya);
	//---------------------Ponto B-----------------//
	printf ("Insira a coordenada x do ponto b:	\n");
	scanf ("%f", &xb);
	printf ("Insira a coordenada y do ponto b:	\n");
	scanf ("%f", &yb);
	
	
	distancia = distance (xa, xb, ya, yb);	//atribui��o da fun��o distance � vari�vel
	printf ("A distancia entre a e b e:	%f", distancia);	//resultado de distance
	return 0;
}

float distance (float x1, float x2, float y1, float y2){	//fun��o distance propriamente dita
	float x = ((x2-x1)*(x2-x1));	//x�
	float y = ((y2-y1)*(y2-y1));	//y2
	float z = x + y;				//z�
	float d = sqrt(z);				//raiz de z, armazenada em d
	return d;						//distancia
}
