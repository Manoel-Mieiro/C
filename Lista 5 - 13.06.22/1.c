#include <stdio.h>

int main (){
	int num=1;
	
	printf ("\nEis os numeros pares entre 1 e 100:\n");
	
	while (num <= 100){
		if (num%2 == 0){
		printf ("\n%d\n", num);
		}
		else{
			
		}
		num = num+1;
	}
	getchar ();
	getchar ();
	return 0;
}
