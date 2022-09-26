#include <stdio.h>
SomaDivisores (int n);

int main (){
	int num, i=0;
	
	for (i; i < 5; i++){	
 	printf ("Insira um valor para avalicao:	");	
 	scanf ("%d", &num);	
 	printf ("\nEis a soma dos divisores de %d: %d\n\n", num, SomaDivisores(num));
	}	
return 0;
}
	
SomaDivisores (int n){
	if (n < 0)
	return 0;

	int sum=0, x=1;
	while (x < n){
		if (n%x != 0)
		sum = sum + 0;
		else
		sum = sum + x;
	x++;
	}
	return sum;
}
