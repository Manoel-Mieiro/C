#include <stdio.h>
#include <string.h>
int main(){
	char str1[100];
	int i=0, t1;
	
	printf ("\Insira uma palavra:	");
	gets (str1);
	
	t1 = strlen (str1);
	
	for (i = t1 - 1; i >= 0 ; i--){
		printf ("%c", str1[i]);
	}
	return 0;
}
