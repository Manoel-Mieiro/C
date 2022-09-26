#include <stdio.h>

int main (){
	int num, cont=1, sum=0, seq=1;
	
	printf ("\nInsira um numero qualquer: \n");
	scanf ("%d", &num);
	

//Enquanto o numero da sequencia nao se igula a num, executamos a verificacao
while (seq <= num)	{
	
	//Enquant o denominador (count) nao superar o  numerador (seq), faz-se a verificacao
	
	while (cont <= seq){
		
		//Se a divisao tiver resto 0 pelo numero presente no cont, 
		//incrementa-se 1 a variavel sum, a qual e responsavel por verificar quantas vezes 
		//A divisao foi exata
		
		if (seq%cont == 0){
			sum = sum + 1;
		}
		else {
		}
		cont = cont + 1;
			}
		
			
			//Todos, menos o 1 e o 0, sao divisiveis por 1 e eles mesmo; portanto, sum deve ser 2
			
			if (sum == 2){
				printf ("\n	%d\n", seq);
							}
					else{
					}
		
		//Aqui eu parto para o proximo numero da sequencia
		
		seq = seq + 1; 
	
	//Aqui eu faco o reset do cont e da soma
	
		cont = 1;
		sum = 0;
	}
	
	
	getchar ();
	getchar ();
	return 0;	
}
