#include <stdio.h>

int main (){
	int num, verificacao;
	printf ("\nPara sair do programa, digite 0.\n");
	while (num != 0){
		printf ("\nInsira um numero pertencente ao intervalo compreendido entre 1000 e 1099: \n");
		scanf ("%d", &num);
		if ((num <= 1000) || (num >= 1999)) {
			exit (0);
		}	
	else {
		verificacao = num%11;
			if (verificacao == 5){
				printf ("O numero %d atende as condicoes propostas", num);
			}	
	}
}
	getchar ();
	getchar ();
	return 0;
}
