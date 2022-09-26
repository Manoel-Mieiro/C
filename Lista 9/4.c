 #include <stdio.h>
 int Absoluto (int n);	//Declaração de absoluto
 int main (){			//main
 	int num, i=1;		//declarção de variáveis
 	for (i=1; i < 6; i++){	//laço for para ler 5 números
 	printf ("Insira um valor para avalicao de valor absoluto:\n	");	//mensagem de input
 	scanf ("%d", &num);	//input num
	printf ("O valor absoluto de %d e:%d\n\n", num, Absoluto(num));	//mensagem output em função de Absoluto
	}
 	return 0;	//end
 }
 int Absoluto (int n){	//Absoluto
 	if (n < 0)	//Condição para numeros negativos
 		return n*-1;	//Caso seja negativo o valor absoluto é seu valor só que positivo
 	else	//se não for o caso, vamos apenas retornar o número
 	return n;	//impressão
 }
