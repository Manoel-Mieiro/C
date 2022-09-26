#include <stdio.h>

int main (){
	int num, contp=0, conti=0;
	
	printf ("\nInsira um numero qualquer: \n");
	scanf ("%d", &num);
	
	//pares
	printf ("\nEis a lista dos %d primeiros numeros pares:\n", num);
	while (contp != num){
		if (contp%2 == 0){
			printf ("\n	%d\n", contp);
		}
		contp = contp+1;
	}
	//impares
printf ("\nEis a lista dos %d primeiros numeros impares:\n", num);
	while (conti != num){
		if (conti%2 != 0){
			printf ("\n	%d\n", conti);
		}
		conti = conti+1;
	}	
	
	getchar ();
	getchar ();
	return 0;
	
}
