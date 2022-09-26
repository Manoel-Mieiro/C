#include <stdio.h>
//OBS: Para que o programa rodasse foi necessário acessar o menu
//ferramentas do Dev C++, ir no menu "Opções do Compilador"
//, "Configurações, "Geração de Código", "Padrão de Língua - std" e 
//nesse último, habilitar o padrão "ISO C99", pois sem ele meu "For" não 
//roda na função pot
int pot (int b, int e);	//declaração da função pot 

int main (){		//função main
	int base, expoente, potencia;	//variáveis parentes de pot
	//Input da potencia
	printf ("Insira a base:	\n");	
	scanf ("%d", &base);
	printf ("Insira o expoente:	\n");
	scanf ("%d", &expoente);
	
	//Atibuição de pot à potencia, bem como sua impressão
	potencia = pot (base, expoente);
	printf ("%d^%d = %d ", base, expoente, potencia);
	return 0;
}

int pot (int b, int e){	//função pot propriamente dita
int asw = 1, i=1;	//declaração de answer(asw) e índice (i)
if (e < 1)			//desvio se expoente menor que 1
exit (0);			//saída
else 				//caso condição acima falsa
for (int i; i <= e; i++){	//loop para calcular potencia
asw *= b;	//o valor da potencia será armazenado em asw e recalculado até i = e
}
return asw;	//resultado
}
