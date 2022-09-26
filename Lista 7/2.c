#include <stdio.h>
#include <string.h>
int main(){
	char str1[100], str2[100];
	int i=0, t1, t2;
	
	printf ("\nPreenchar a string 1:	");
	gets (str1);
	
	printf ("\nPreenchar a string 2:	");
	gets (str2);
	
	t1 = strlen (str1); 
	t2 = strlen (str2);
	
	if (t1 != t2){
			printf ("\nNao sao iguais!");
			return 0;
		}
	for (i = 0; i < t1; i++){
		if (str1[i] != str2[i]){
			printf ("\nNao sao iguais!");
			return 0;
		}
	}
	printf ("\nSao iguais!");
	
	return 0;
}
