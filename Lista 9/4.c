 #include <stdio.h>
 int Absoluto (int n);	//Declara��o de absoluto
 int main (){			//main
 	int num, i=1;		//declar��o de vari�veis
 	for (i=1; i < 6; i++){	//la�o for para ler 5 n�meros
 	printf ("Insira um valor para avalicao de valor absoluto:\n	");	//mensagem de input
 	scanf ("%d", &num);	//input num
	printf ("O valor absoluto de %d e:%d\n\n", num, Absoluto(num));	//mensagem output em fun��o de Absoluto
	}
 	return 0;	//end
 }
 int Absoluto (int n){	//Absoluto
 	if (n < 0)	//Condi��o para numeros negativos
 		return n*-1;	//Caso seja negativo o valor absoluto � seu valor s� que positivo
 	else	//se n�o for o caso, vamos apenas retornar o n�mero
 	return n;	//impress�o
 }
