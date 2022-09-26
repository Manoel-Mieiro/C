#include <stdio.h>
#include <math.h>		//biblioteca que me permite calcular a raiz quadrada mais adiante no programa
float distance (float x1, float x2, float y1, float y2);	//declaracao de distance, bem como sesus  parametros

int main (){	//função main
	float distancia, xa, xb, ya, yb;	//declaração das variáveis irmãs de distance
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
	
	
	distancia = distance (xa, xb, ya, yb);	//atribuição da função distance à variável
	printf ("A distancia entre a e b e:	%f", distancia);	//resultado de distance
	return 0;
}

float distance (float x1, float x2, float y1, float y2){	//função distance propriamente dita
	float x = ((x2-x1)*(x2-x1));	//x²
	float y = ((y2-y1)*(y2-y1));	//y2
	float z = x + y;				//z²
	float d = sqrt(z);				//raiz de z, armazenada em d
	return d;						//distancia
}
