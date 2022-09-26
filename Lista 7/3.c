#include <stdio.h>
#include <string.h>
int main(){
	char str1[100];
	int i=0, cont=0, t1;
	
	printf ("\nPreenchar a string:	");
	gets (str1);
	
	t1 = strlen (str1);
	
	for (i = 0; i < t1; i++){
		if (str1[i] == '1'){
			cont++;
		}
	}
	printf ("\n Foram detectados %d numeros 1 na string.", cont);
	
	return 0;
}
