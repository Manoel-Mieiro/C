#include <stdio.h>
//OBS: Para que o programa rodasse foi necess�rio acessar o menu
//ferramentas do Dev C++, ir no menu "Op��es do Compilador"
//, "Configura��es, "Gera��o de C�digo", "Padr�o de L�ngua - std" e 
//nesse �ltimo, habilitar o padr�o "ISO C99", pois sem ele meu "For" n�o 
//roda na fun��o pot
int pot (int b, int e);	//declara��o da fun��o pot 

int main (){		//fun��o main
	int base, expoente, potencia;	//vari�veis parentes de pot
	//Input da potencia
	printf ("Insira a base:	\n");	
	scanf ("%d", &base);
	printf ("Insira o expoente:	\n");
	scanf ("%d", &expoente);
	
	//Atibui��o de pot � potencia, bem como sua impress�o
	potencia = pot (base, expoente);
	printf ("%d^%d = %d ", base, expoente, potencia);
	return 0;
}

int pot (int b, int e){	//fun��o pot propriamente dita
int asw = 1, i=1;	//declara��o de answer(asw) e �ndice (i)
if (e < 1)			//desvio se expoente menor que 1
exit (0);			//sa�da
else 				//caso condi��o acima falsa
for (int i; i <= e; i++){	//loop para calcular potencia
asw *= b;	//o valor da potencia ser� armazenado em asw e recalculado at� i = e
}
return asw;	//resultado
}
